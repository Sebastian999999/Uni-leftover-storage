// Import necessary libraries
const express = require('express');
const cors = require('cors');
const mysql = require('mysql2');
const app = express();
const port = 3000;

// Enable CORS for all routes
app.use(cors());

// Create a connection to your MySQL database
const connection = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: '12345678',
  database: 'TimeTable'
});

// Connect to MySQL
connection.connect((err) => {
  if (err) {
    console.error('Error connecting to MySQL:', err);
    return;
  }
  console.log('Connected to MySQL');
});
// Define a route for the root path
app.get('/', (req, res) => {
  res.send('Hello, this is your Express.js server!');
});
// Route to get instructors
app.get('/instructors', (req, res) => {
  const query = 'SELECT * FROM Instructors'; // Modify this query based on your database schema
  connection.query(query, (err, results) => {
    if (err) {
      console.error('Error fetching instructors from MySQL:', err);
      res.status(500).send('Internal Server Error');
      return;
    }
    res.json(results);
  });
});

// Route to get courses with enrollments count
app.get('/courses', (req, res) => {
  const query = `
    SELECT c.*, COUNT(ce.id) AS enrollments
    FROM Courses c
    LEFT JOIN CourseEnrollments ce ON c.id = ce.course_id
    GROUP BY c.id
  `;
  connection.query(query, (err, results) => {
    if (err) {
      console.error('Error fetching courses from MySQL:', err);
      res.status(500).send('Internal Server Error');
      return;
    }
    res.json(results);
  });
});

// Route to get course enrollments
app.get('/enrollments', (req, res) => {
  const query = 'SELECT * FROM CourseEnrollments'; // Modify this query based on your database schema
  connection.query(query, (err, results) => {
    if (err) {
      console.error('Error fetching course enrollments from MySQL:', err);
      res.status(500).send('Internal Server Error');
      return;
    }
    res.json(results);
  });
});

// Route to get students
app.get('/students', (req, res) => {
  const query = 'SELECT * FROM Students'; // Modify this query based on your database schema
  connection.query(query, (err, results) => {
    if (err) {
      console.error('Error fetching course students from MySQL:', err);
      res.status(500).send('Internal Server Error');
      return;
    }
    res.json(results);
  });
});

// Start the server
app.listen(port, () => {
  console.log(`Server is running at http://localhost:${port}`);
});

