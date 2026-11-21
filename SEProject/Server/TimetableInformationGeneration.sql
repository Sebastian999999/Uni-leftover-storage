USE TimeTable;

-- Create Departments table
CREATE TABLE Departments (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL
);

-- Insert sample departments
INSERT INTO Departments (name) VALUES
    ('Computer Science'),
    ('Electrical Engineering'),
    ('Mechanical Engineering'),
    ('Civil Engineering'),
    ('Chemical Engineering');

-- Create Instructors table
CREATE TABLE Instructors (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    department_id INT,
    officeNo VARCHAR(20),
    FOREIGN KEY (department_id) REFERENCES Departments(id)
);

-- Additional Instructors
INSERT INTO Instructors (name, department_id, officeNo) VALUES
    ('Dr. Taylor', 3, 'B-106'),
    ('Dr. Lee', 3, 'B-107'),
    ('Dr. Walker', 4, 'B-108'),
    ('Dr. Hall', 4, 'B-109'),
    ('Dr. Young', 5, 'B-110'),
    ('Dr. Hernandez', 5, 'B-111'),
    ('Dr. King', 1, 'B-112'),
    ('Dr. Wright', 1, 'B-113'),
    ('Dr. Lopez', 2, 'B-114'),
    ('Dr. Hill', 2, 'B-115'),
    ('Dr. Scott', 3, 'B-116'),
    ('Dr. Green', 3, 'B-117'),
    ('Dr. Adams', 4, 'B-118'),
    ('Dr. Baker', 4, 'B-119'),
    ('Dr. Gonzalez', 5, 'B-120'),
    ('Dr. Clark', 1, 'C-101'),
    ('Dr. Lewis', 1, 'C-102'),
    ('Dr. Moore', 2, 'C-103'),
    ('Dr. Turner', 2, 'C-104'),
    ('Dr. Parker', 3, 'C-105'),
    ('Dr. Cooper', 3, 'C-106'),
    ('Dr. Ward', 4, 'C-107'),
    ('Dr. Reed', 4, 'C-108'),
    ('Dr. Morris', 5, 'C-109'),
    ('Dr. Powell', 5, 'C-110'),
    ('Dr. Simmons', 1, 'C-111'),
    ('Dr. Foster', 1, 'C-112'),
    ('Dr. Bryant', 2, 'C-113'),
    ('Dr. Russell', 2, 'C-114'),
    ('Dr. Griffin', 3, 'C-115'),
    ('Dr. Butler', 3, 'C-116'),
    ('Dr. Barnes', 4, 'C-117'),
    ('Dr. Fisher', 4, 'C-118'),
    ('Dr. Simmons', 5, 'C-119'),
    ('Dr. Long', 5, 'C-120');
-- Create Courses table
CREATE TABLE Courses (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    semester INT,
    department_id INT,
    instructor_id INT,
    section VARCHAR(5),
    FOREIGN KEY (department_id) REFERENCES Departments(id),
    FOREIGN KEY (instructor_id) REFERENCES Instructors(id)
);
-- Common Courses Offered in Every Department (Continued)
INSERT INTO Courses (name, semester, department_id, instructor_id, section) VALUES
    -- Software Engineering
    ('Software Engineering', 5, 1, 1, 'A'),
    ('Software Engineering', 6, 2, 2, 'A'),
    ('Software Engineering', 7, 3, 3, 'A'),
    ('Software Engineering', 8, 4, 4, 'A'),
    ('Software Engineering', 1, 5, 5, 'A'),

    ('Software Engineering', 5, 1, 6, 'B'),
    ('Software Engineering', 6, 2, 7, 'B'),
    ('Software Engineering', 7, 3, 8, 'B'),
    ('Software Engineering', 8, 4, 9, 'B'),
    ('Software Engineering', 1, 5, 10, 'B'),

    ('Software Engineering', 5, 1, 11, 'C'),
    ('Software Engineering', 6, 2, 12, 'C'),
    ('Software Engineering', 7, 3, 13, 'C'),
    ('Software Engineering', 8, 4, 14, 'C'),
    ('Software Engineering', 1, 5, 15, 'C'),

    -- Information Security
    ('Information Security', 5, 1, 16, 'A'),
    ('Information Security', 5, 2, 17, 'A'),
    ('Information Security', 6, 3, 18, 'A'),
    ('Information Security', 7, 4, 19, 'A'),
    ('Information Security', 8, 5, 20, 'A'),

    ('Information Security', 5, 1, 1, 'B'),
    ('Information Security', 5, 2, 2, 'B'),
    ('Information Security', 6, 3, 3, 'B'),
    ('Information Security', 7, 4, 4, 'B'),
    ('Information Security', 8, 5, 5, 'B'),

    ('Information Security', 5, 1, 6, 'C'),
    ('Information Security', 5, 2, 7, 'C'),
    ('Information Security', 6, 3, 8, 'C'),
    ('Information Security', 7, 4, 9, 'C'),
    ('Information Security', 8, 5, 10, 'C'),

    -- DevOps
    ('DevOps', 5, 1, 11, 'A'),
    ('DevOps', 4, 2, 12, 'A'),
    ('DevOps', 5, 3, 13, 'A'),
    ('DevOps', 6, 4, 14, 'A'),
    ('DevOps', 7, 5, 15, 'A'),

    ('DevOps', 5, 1, 16, 'B'),
    ('DevOps', 4, 2, 17, 'B'),
    ('DevOps', 5, 3, 18, 'B'),
    ('DevOps', 6, 4, 19, 'B'),
    ('DevOps', 7, 5, 20, 'B'),

    ('DevOps', 5, 1, 1, 'C'),
    ('DevOps', 4, 2, 2, 'C'),
    ('DevOps', 5, 3, 3, 'C'),
    ('DevOps', 6, 4, 4, 'C'),
    ('DevOps', 7, 5, 5, 'C'),

    -- Principles of Programming Languages
    ('Principles of Programming Languages', 1, 1, 6, 'A'),
    ('Principles of Programming Languages', 2, 2, 7, 'A'),
    ('Principles of Programming Languages', 2, 3, 8, 'A'),
    ('Principles of Programming Languages', 2, 4, 9, 'A'),
    ('Principles of Programming Languages', 2, 5, 10, 'A'),

    ('Principles of Programming Languages', 1, 1, 11, 'B'),
    ('Principles of Programming Languages', 2, 2, 12, 'B'),
    ('Principles of Programming Languages', 2, 3, 13, 'B'),
    ('Principles of Programming Languages', 2, 4, 14, 'B'),
    ('Principles of Programming Languages', 2, 5, 15, 'B'),

    ('Principles of Programming Languages', 1, 1, 16, 'C'),
    ('Principles of Programming Languages', 2, 2, 17, 'C'),
    ('Principles of Programming Languages', 2, 3, 18, 'C'),
    ('Principles of Programming Languages', 2, 4, 19, 'C'),
    ('Principles of Programming Languages', 2, 5, 20, 'C');


-- Create Students table
CREATE TABLE Students (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    semester INT,
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES Departments(id)
);

-- Insert sample students
INSERT INTO Students (name, semester, department_id) VALUES
    ('Student 1', 5, 1),
    ('Student 2', 4, 1),
    ('Student 3', 6, 1),
    ('Student 4', 3, 2),
    ('Student 5', 2, 3),
    ('Student 6', 5, 2),
    ('Student 7', 4, 2),
    ('Student 8', 6, 3),
    ('Student 9', 3, 3),
    ('Student 10', 2, 4),
    ('Student 11', 5, 4),
    ('Student 12', 4, 5),
    ('Student 13', 6, 5),
    ('Student 14', 3, 5),
    ('Student 15', 2, 1);
    
    
-- Create CourseEnrollments table
CREATE TABLE CourseEnrollments (
    id INT PRIMARY KEY AUTO_INCREMENT,
    student_id INT,
    course_id INT,
    FOREIGN KEY (student_id) REFERENCES Students(id),
    FOREIGN KEY (course_id) REFERENCES Courses(id)
);

-- Sample Course Enrollments
INSERT INTO CourseEnrollments (student_id, course_id) VALUES
    (1, 1), (1, 2), (1, 3), (1, 4), (1, 5),
    (2, 6), (2, 7), (2, 8), (2, 9), (2, 10),
    (3, 11), (3, 12), (3, 13), (3, 14), (3, 15),
    (4, 16), (4, 17), (4, 18), (4, 19), (4, 20),
    (5, 1), (5, 2), (5, 3), (5, 4), (5, 5),
    (6, 6), (6, 7), (6, 8), (6, 9), (6, 10),
    (7, 11), (7, 12), (7, 13), (7, 14), (7, 15),
    (8, 16), (8, 17), (8, 18), (8, 19), (8, 20),
    (9, 1), (9, 2), (9, 3), (9, 4), (9, 5),
    (10, 6), (10, 7), (10, 8), (10, 9), (10, 10),
    (11, 11), (11, 12), (11, 13), (11, 14), (11, 15),
    (12, 16), (12, 17), (12, 18), (12, 19), (12, 20),
    (13, 1), (13, 2), (13, 3), (13, 4), (13, 5),
    (14, 6), (14, 7), (14, 8), (14, 9), (14, 10),
    (15, 11), (15, 12), (15, 13), (15, 14), (15, 15);

-- Update Courses table to include maximum capacity
ALTER TABLE Courses
ADD COLUMN max_capacity INT;

-- Update sample Courses data with maximum capacity
UPDATE Courses SET max_capacity = 30 WHERE id BETWEEN 1 AND 5;
UPDATE Courses SET max_capacity = 25 WHERE id BETWEEN 6 AND 10;
UPDATE Courses SET max_capacity = 20 WHERE id BETWEEN 11 AND 15;
UPDATE Courses SET max_capacity = 15 WHERE id BETWEEN 16 AND 20;

