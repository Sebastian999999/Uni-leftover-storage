//import * as XLSX from 'xlsx';
function saveTimetable() {
    const timetableData = collectTimetableData();
    const worksheet = XLSX.utils.json_to_sheet(timetableData);
    const workbook = XLSX.utils.book_new();
    XLSX.utils.book_append_sheet(workbook, worksheet, 'Timetable');
    const excelBuffer = XLSX.write(workbook, { bookType: 'xlsx', type: 'array' });

    // Save the Excel file
    saveAsExcelFile(excelBuffer, 'Timetable.xlsx');
    alert("Timetable saved successfully!");
}

function saveAsExcelFile(buffer, fileName) {
    const blob = new Blob([new Uint8Array(buffer)], { type: 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet;charset=UTF-8' });
    saveAs(blob, fileName);
}

// Example function to collect timetable data
function collectTimetableData() {
    const timetableData = [];
    $('.timetable').each(function () {
        const day = $(this).index() + 1;
        $(this).find('.time-slot').each(function () {
            const timeSlot = $(this).data('time');
            const courses = [];
            $(this).find('.dropped-course').each(function () {
                const courseId = $(this).data('id');
                const instructorId = $(this).data('instructor_id');
                const section = $(this).data('section');
                // Add more data as needed
                courses.push({ courseId, instructorId, section });
            });
            timetableData.push({ day, timeSlot, courses });
        });
    });
    return timetableData;
}
var enrolled=null;
$('#saveTimetableBtn').on('click', saveTimetable);
$(document).ready(async function() {

    try {
    const instructors = await fetchInstructors();
    const courses = await fetchCourses();
    const enrollments=await fetchEnrollments();
    const students = await fetchEnrollments();
    courses.forEach(course => {

        let color = "";
	if (course.department_id == 1) {
		color = `#FF${course.semester}000`; // Example color for department_id 1
	    } else if (course.department_id == 2) {
		color = `#EE${course.semester}000`; // Example color for department_id 2
	    } else if (course.department_id == 3) {
		color = `#CC${course.semester}000`; // Example color for department_id 3
	    } else if (course.department_id == 4) {
		color = `#BB${course.semester}000`; // Example color for department_id 4
	    } else if (course.department_id == 5) {
		color = `#AA${course.semester}000`; // Example color for department_id 5
	    }
        /*var studentids=[];
        enrollments.forEach(enrolled=>{
            if(enrolled.course_id == course.id){
                studentids.append(course.id);
            }
        });*/
		$('#coursesList').append(`<div class="course" data-id="${course.id}" data-name="${course.name}" data-section="${course.section}" data-semester="${course.semester}" data-instructor_id="${course.instructor_id}" data-department_id="${course.department_id}"  style="background-color: ${color};">${course.name} ${course.section} semester ${course.semester}</div>`);

        });
    //
    $('.course').draggable({
        helper: 'clone',
        revert: "invalid"
    });
    $('.course').on('click', function() {
        const courseId = $(this).data('id');
        const name = $(this).data('name');
        const section = $(this).data('section');
        const departmentId = $(this).data('department_id');
        const instructorId = $(this).data('instructor_id');
        let instructorname="";
        instructors.forEach(course => {
            if(course.id==instructorId){
                instructorname=course.name;
            }
        });

        
        // Redirect to the course details page with necessary parameters
        window.location.href = `courseDetails.html?courseId=${courseId}&name=${name}&section=${section}&departmentId=${departmentId}&instructorId=${instructorId}&instructorname=${instructorname}`;
     });
    instructors.forEach(course => {
        let color = "";
        if (course.department_id == 1) {
            color = `#FF${course.semester}000`; // Example color for department_id 1
            } else if (course.department_id == 2) {
            color = `#EE${course.semester}000`; // Example color for department_id 2
            } else if (course.department_id == 3) {
            color = `#CC${course.semester}000`; // Example color for department_id 3
            } else if (course.department_id == 4) {
            color = `#BB${course.semester}000`; // Example color for department_id 4
            } else if (course.department_id == 5) {
            color = `#AA${course.semester}000`; // Example color for department_id 5
            }
        $('#instructorsList').append(`<div class="instructor" data-id="${course.id}" data-name="${course.name}" style="background-color: ${color};">${course.name}</div>`);
    }   );

    $('.instructor').draggable({
        helper: 'clone',
        revert: "invalid"
    });

    courses.forEach(course => {
        let color = "";
        if (course.department_id == 1) {
            color = `#FF${course.semester}000`; // Example color for department_id 1
            } else if (course.department_id == 2) {
            color = `#EE${course.semester}000`; // Example color for department_id 2
            } else if (course.department_id == 3) {
            color = `#CC${course.semester}000`; // Example color for department_id 3
            } else if (course.department_id == 4) {
            color = `#BB${course.semester}000`; // Example color for department_id 4
            } else if (course.department_id == 5) {
            color = `#AA${course.semester}000`; // Example color for department_id 5
            }
        $('#sectionsList').append(`<div class="section" data-id="${course.id}" data-name="${course.section}" style="background-color: ${color};">${course.section}</div>`);
    }
    );

    $('.section').draggable({
        helper: 'clone',
        revert: "invalid"
    });

        $('#generateTimetable').click(function() {
            const totalRooms = parseInt($('#totalRooms').val()) || 0;
            const classDuration = parseInt($('#classDuration').val()) || 0;
            const breakTime = parseInt($('#breakTime').val()) || 0;
            const totalDays = Math.min(parseInt($('#totalDays').val()) || 0, 7);
            const startTime = $('#startTime').val();
            const endTime = $('#endTime').val();
            generateTimetable(totalRooms, classDuration, breakTime, totalDays, startTime, endTime);

        });
    }catch (error) {
        console.error('Error:', error);
        // Handle the error appropriately
    }
    
});

// Function to fetch courses from the server
 function fetchInstructors() {
    return new Promise((resolve, reject) => {
        $.get('http://localhost:3000/instructors')
                .done(data => {
            	//alert("SUKASUKA");
                console.log('Fetched instructors:', data);
                //renderCourses(data);
                resolve(data);
            })
            .fail(error => {
            	alert("BLYAABLYAA");
                console.error('Error fetching instructors:', error);
                reject(error);
            });
    });
}

function fetchStudents() {
    return new Promise((resolve, reject) => {
        $.get('http://localhost:3000/students')
                .done(data => {
            	//alert("SUKASUKA");
                console.log('Fetched students:', data);
                //renderCourses(data);
                resolve(data);
            })
            .fail(error => {
            	alert("BLYAABLYAA");
                console.error('Error fetching students:', error);
                reject(error);
            });
    });
}
function fetchEnrollments() {
    return new Promise((resolve, reject) => {
        $.get('http://localhost:3000/enrollments')
            .done(data => {
            	//alert("SUKASUKA");
                console.log('Fetched enrollments:', data);
                //renderCourses(data);
                resolve(data);
            })
            .fail(error => {
            	alert("BLYAABLYAA");
                console.error('Error fetching enrollments:', error);
                reject(error);
            });
    });
}

  
  // Function to fetch courses from the server
function fetchCourses() {
    return new Promise((resolve, reject) => {
        $.get('http://localhost:3000/courses')
            .done(data => {
            	//alert("SUKA");
                console.log('Fetched courses:', data);
                //renderCourses(data);
                resolve(data);
            })
            .fail(error => {
            	alert("BLYAA");
                console.error('Error fetching courses:', error);
                reject(error);
            });
    });
}

function generateTimetable(totalRooms, classDuration, breakTime, totalDays, startTime, endTime) {
    let timetableHtml = '<div class="day-tabs">';
    const weekdays = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday'];
    
    for (let day = 0; day < totalDays; day++) {
        timetableHtml += `<span class="day-tab" onclick="switchDay(${day + 1})">${weekdays[day]}</span>`;
    }
    timetableHtml += '</div><div class="timetable-day">';

    for (let day = 1; day <= totalDays; day++) {
        timetableHtml += `<table class="timetable" id="day${day}"><tr><th>Room / Time</th>`;
        let currentHour = parseInt(startTime.split(':')[0]);
        let currentMinute = parseInt(startTime.split(':')[1]);
        const endHour = parseInt(endTime.split(':')[0]);
        const endMinute = parseInt(endTime.split(':')[1]);

        // Headers for class and break times
        
        while (true) {
            let slotEnd = addMinutes(currentHour, currentMinute, classDuration);

            // Check if adding the next class slot would exceed the end time
            if (slotEnd.hour > endHour || (slotEnd.hour === endHour && slotEnd.minute >= endMinute)) {
                break;
            }
            timetableHtml += `<th>${formatTime(currentHour, currentMinute)}-${formatTime(slotEnd.hour, slotEnd.minute)}</th>`;

            // Move current time to the end of the class slot
            currentHour = slotEnd.hour;
            currentMinute = slotEnd.minute;

            let breakEnd = addMinutes(currentHour, currentMinute, breakTime);
            // Check if adding the next break would exceed the end time
            if (breakEnd.hour > endHour || (breakEnd.hour === endHour && breakEnd.minute >= endMinute)) {
                break;
            }
            timetableHtml += `<th class="break-time">${formatTime(currentHour, currentMinute)}-${formatTime(breakEnd.hour, breakEnd.minute)}</th>`;

            // Move current time to the end of the break
            currentHour = breakEnd.hour;
            currentMinute = breakEnd.minute;
        }

        timetableHtml += '</tr>';

        // Rows for class and break times
        for (let room = 1; room <= totalRooms; room++) {
            timetableHtml += `<tr><td>Room ${room}</td>`;
            currentHour = parseInt(startTime.split(':')[0]);
            currentMinute = parseInt(startTime.split(':')[1]);
        
            while (true) {
                let slotEnd = addMinutes(currentHour, currentMinute, classDuration);
        
                // Check if adding the next class slot would exceed the end time
                if (slotEnd.hour > endHour || (slotEnd.hour === endHour && slotEnd.minute >= endMinute)) {
                    break;
                }
                timetableHtml += `<td class="time-slot" data-time="${formatTime(currentHour, currentMinute)}-${formatTime(slotEnd.hour, slotEnd.minute)}"></td>`;
                
                currentHour = slotEnd.hour;
                currentMinute = slotEnd.minute;
        
                let breakEnd = addMinutes(currentHour, currentMinute, breakTime);
        
                // Check if adding the next break would exceed the end time
                if (breakEnd.hour > endHour || (breakEnd.hour === endHour && breakEnd.minute >= endMinute)) {
                    // Do not add a break slot if it exceeds end time
                    break;
                }
                timetableHtml += `<td class="break-time-slot" style="background-color: #cccccc;"></td>`;
        
                currentHour = breakEnd.hour;
                currentMinute = breakEnd.minute;

            }
            timetableHtml += '</tr>';
        }
        
        timetableHtml += '</table>';
        
        // add default courses to timetable (for testing)
$('#day1 .time-slot[data-time="09:00 AM-10:00 AM"]').append('<div class="dropped-course" data-id="101" style="background-color: #FFD700;">Software Engineering</div>');  
$('#day1 .time-slot[data-time="10:00 AM-11:00 AM"]').append('<div class="dropped-course" data-id="102" style="background-color: #7FFFD4;">Information Security</div>');
$('#day1 .time-slot[data-time="11:00 AM-12:00 PM"]').append('<div class="dropped-course" data-id="103" style="background-color: #4456D4;">DevOps</div>');
$('#day1 .time-slot[data-time="12:00 PM-01:00 PM"]').append('<div class="dropped-course" data-id="104" style="background-color: #3FAFD4;">Principles of Programming Languages</div>');

    }

    $('#timetableContainer').html(timetableHtml);
    setupDroppables();
    switchDay(1);
}

/*let course = {"id":1,"name":"Software Engineering","semester":5,"department_id":1,"instructor_id":1,"section":"A","max_capacity":30,"enrollments":4};//= {};
                getRandomCourse(course , result => {
                    console.log("Callback result:",result.id);
                    course=result;
                    const isClash = checkForClashes(course, day, formatTime(currentHour, currentMinute), formatTime(slotEnd.hour, slotEnd.minute));

                if (isClash) {
                    // Handle clash detection (you can skip the current slot or show a message)
                    alert(`Clash detected for ${course.name} on ${weekdays[day - 1]} at ${formatTime(currentHour, currentMinute)}-${formatTime(slotEnd.hour, slotEnd.minute)}`);
                } else {
                    timetableHtml += `<td class="time-slot" data-time="${formatTime(currentHour, currentMinute)}-${formatTime(slotEnd.hour, slotEnd.minute)}">${course.name}</td>`;
                }
                }); */// Replace this with your logic to get a course
                //alert("SUKASUKA" + course.id);
// Replace this function with your logic to get a course
async function getRandomCourse(Course , callback) {
    const courses = await fetchCourses();
    const randomIndex = Math.floor(Math.random() * courses.length);
    
    courses.forEach(course => {
        if (course.id==randomIndex){
            //alert("Suka"+course.id);
            Course=course;
        }
    });
    alert("SukaSukaSuka"+Course.id);
    callback(Course);
}
// Placeholder function for clash detection, replace with your actual logic
function checkForClashes(course, day, startTime, endTime) {
    const dayId = `day${day}`;
    const timeSlotSelector = `#${dayId} .time-slot[data-time="${startTime}-${endTime}"]`;

    // Check if the course is already scheduled in the same time slot
    if ($(timeSlotSelector).find(`.dropped-course[data-id="${course.id}"]`).length > 0) {
        return true; // Clash detected
    }

    // Add more checks for instructor and section clashes if needed

    return false; // No clash detected
}



// Function to get available slots for a given day
function getAvailableSlots(day) {
    const allTimeSlots = [...Array(5).keys()]; // Assuming 8 time slots per day
    const occupiedSlots = []; // Add logic to get occupied slots

    // Filter out occupied slots
    const availableSlots = allTimeSlots.filter(slot => !occupiedSlots.includes(slot));

    return availableSlots;
}

// Function to select a time slot for a course from the available slots
function selectTimeSlot(course, availableSlots) {
    // Add your logic to select a time slot
    const selectedTimeSlot = availableSlots[0]; // Placeholder logic, replace as needed

    // Add clash detection logic here
    if (checkForClashes(course, selectedTimeSlot)) {
        alert(`Clash detected: ${course.name} cannot be added to an occupied time slot.`);
        return null;
    }

    return selectedTimeSlot;
}

// Function to allocate a course to the timetable
function allocateCourseToTimetable(course, day, timeSlot) {
    // Add your logic to allocate the course

    // Add clash detection logic here
    if (checkForClashes(course, timeSlot)) {
        alert(`Clash detected: ${course.name} cannot be added to an occupied time slot.`);
        return;
    }

    // Your existing code for allocating the course
    const courseElement = $(`#${day} .time-slot[data-time="${timeSlot}"]`);
    courseElement.append(`<div class="dropped-course" data-id="${course.id}" data-department_id="${course.departmentId}" data-semester="${course.semester}" data-instructor_id="${course.instructorId}" data-section="${course.section}" style="background-color: ${course.color};">${course.name} ${course.section} ${course.semester}</div>`);
    // Additional logic for making the course draggable

    // Additional logic for redirecting to course details
    courseElement.find('.dropped-course').last().draggable({
        helper: 'clone',
        revert: "invalid",
        // Additional logic for handling drag events
    });
}



function countScheduledSections(departmentId, section) {
    let count = 0;
    $('.timetable .time-slot').each(function () {
        if ($(this).find(`.dropped-course[data-department_id="${departmentId}"][data-section="${section}"]`).length > 0) {
            count++;
        }
    });
    return count;
}

//const enrollments = await fetchEnrollments();
function setupDroppables() {
    $('.timetable .time-slot').not('.break-time').droppable({
        accept: ".course, .dropped-course",
        drop: function (event, ui) {
            const courseId = $(ui.draggable).data('id');
            const courseName = $(ui.draggable).data('name') || $(ui.draggable).text();
            const courseColor = $(ui.draggable).css('background-color');
            const departmentId = $(ui.draggable).data('department_id');
            const semesterNo = $(ui.draggable).data('semester');
            const section= $(ui.draggable).data('section');
            const instructorId = $(ui.draggable).data('instructor_id');
            //alert(instructorId);
            const timeSlot = $(this).data('time');
            const dayId = $(this).closest('.timetable').attr('id');
            const isClone = $(ui.draggable).hasClass('course');
            const instructorName=$(ui.draggable).data('name');
            const roomOccupiedInSlot = $(this).find('.dropped-course').length > 0;
            
            if (isClone) {
                if (roomOccupiedInSlot || isCourseScheduled(courseId, timeSlot, dayId)) {
                    alert(`Clash detected: ${courseName} cannot be added to an occupied time slot or room.`);
                    return;
                }
                if (roomOccupiedInSlot || isInstructorCourseScheduled(instructorId, timeSlot, dayId)){
                    alert(`Clash detected with another lecture class: ${courseName} cannot be added to an occupied time slot or room where there is already class scheduled.`);
                    return;
                }
                if (roomOccupiedInSlot || isSectionScheduled(semesterNo , section , departmentId, timeSlot, dayId)){
                    alert(`Clash detected with another lecture class of same section : ${courseName} cannot be added to an occupied time slot or room where there is already class scheduled of the same section.`);
                    return;
                }
                /*enrolled.forEach(course => {
                    if(course.course_id==courseId){
                        var l = checkForClashes(course.student_id,dayId,timeSlot.split('-')[0], timeSlot.split('-')[1]);
                        alert("Hello");
                        if (l>0){
                            alert("No of students have clashes:",l);
                        }
                    }
                });*/
                //checkStudentClash();
                $(this).append(`<div class="dropped-course" data-id="${courseId}" data-name="${courseName}" data-department_id="${departmentId}" data-semester="${semesterNo}" data-instructor_id="${instructorId}" data-section="${section}" style="background-color: ${courseColor};">${courseName} ${section} ${semesterNo}</div>`);
            } else {
                const currentSlot = $(ui.draggable).parent();
                if (this !== currentSlot[0] && !isCourseScheduled(courseId, timeSlot, dayId)) {
                    $(this).append(ui.draggable);
                } else {
                    alert(`Clash detected: Cannot move ${courseName} to an occupied time slot.`);
                }
            }

            $(this).find('.dropped-course').last().draggable({
                helper: 'clone',
                revert: "invalid",
                start: function() {
                    const courseId = $(this).data('id');
                    const section = $(this).data('section');
                    //displayCourseDetails(courseId, section);
                },
                click: function() {
                    const courseId = $(this).data('id');
                    const section = $(this).data('section');
                    //displayCourseDetails(courseId);
                }
                
            });
            $('.dropped-course').on('click', function() {
                const courseId = $(this).data('id');
                const section = $(this).data('section');
                const departmentId = $(this).data('department_id');
                const name = $(this).data('name');
                // Redirect to the course details page with necessary parameters
                window.location.href = `courseDetails.html?courseId=${courseId}&name=${name}&section=${section}&departmentId=${departmentId}`;
             });
             
        }
    });

    $('#coursesList').droppable({
        accept: ".dropped-course",
        drop: function (event, ui) {
            ui.draggable.remove();
        }
    });
}


function addMinutes(hour, minute, minsToAdd) {
    minute += minsToAdd;
    hour += Math.floor(minute / 60);
    minute %= 60;
    return { hour, minute };
}

function formatTime(hour, minute) {
    let period = "AM";
    if (hour >= 12) {
        period = "PM";
        if (hour > 12) hour -= 12;
    }
    return `${hour.toString().padStart(2, '0')}:${minute.toString().padStart(2, '0')} ${period}`;
}

function switchDay(day) {
    $('.timetable').hide();
    $(`#day${day}`).show();
}

function isCourseScheduled(courseId, timeSlot, dayId) {
    let isScheduled = false;
    $(`#${dayId} .time-slot[data-time="${timeSlot}"]`).each(function() {
        if ($(this).find(`.dropped-course[data-id="${courseId}"]`).length > 0) {
            isScheduled = true;
            return false; // Break the loop
        }
    });
    return isScheduled;
}

function checkStudentClashes(studentId, timeSlot, dayId) {
    let isScheduled = false;
    $(`#${dayId} .time-slot[data-time="${timeSlot}"]`).each(function() {
        if ($(this).find(`.dropped-course[data-instructor_id="${instructorId}"]`).length > 0) {
            isScheduled = true;
            return false; // Break the loop
        }
    });
    return isScheduled;
}


function isInstructorCourseScheduled(instructorId, timeSlot, dayId) {
    let isScheduled = false;
    $(`#${dayId} .time-slot[data-time="${timeSlot}"]`).each(function() {
        if ($(this).find(`.dropped-course[data-instructor_id="${instructorId}"]`).length > 0) {
            isScheduled = true;
            return false; // Break the loop
        }
    });
    return isScheduled;
}

function isSectionScheduled(SemesterNo , Section , DepartmentId, timeSlot, dayId) {
    let isScheduled = false;
    $(`#${dayId} .time-slot[data-time="${timeSlot}"]`).each(function() {
        if ($(this).find(`.dropped-course[data-semester="${SemesterNo}"]`).length > 0 &&
        $(this).find(`.dropped-course[data-section="${Section}"]`).length > 0 &&
        $(this).find(`.dropped-course[data-department_id="${DepartmentId}"]`).length > 0) {
            isScheduled = true;
            return false; // Break the loop
        }
    });
    return isScheduled;
}



