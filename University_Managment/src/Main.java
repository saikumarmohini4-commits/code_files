import java.sql.SQLOutput;

public class Main
{
    public static void main(String[] args)
    {
        University university = new University();
        university.addStudent("Saikumar" , "saikumarmohini4@gmail.com" , 100);
        university.addStudent("Akira" , "something49@gmail.com" , 200);
        university.addStudent("Natraj" , "natraj67@gmail.com" , 400);
        university.addStudent("Bhuvan" , "bhuvan@gmail.com" , 400);
        university.addStudent("Aryan" , "AryanRk@gmail.com" , 400);
        university.addStudent("someone" , "someone@gmail.com" , 100);
        university.addStudent("someone2" , "someone2@gmail.com" , 200);
        university.addProfessor("Uknown_lecturer" , "unknown@gmail.com" , 200);
        university.addProfessor("Unknown_lecturer2" , "unknownfk_2@gmail.com" , 100);
        university.addCourse("Introduction to Java Programming" , 4 , 100);
        university.addCourse("Data Structures and Algorithms" , 4 , 100);
        university.addCourse("Circuit Theory and Analysis" , 4 , 200);
        university.addCourse("Digital Logic and Logic design" , 3 , 200);
        university.addCourse("Engineering Mechanics and Statics" , 3 , 300);
        university.addCourse("Thermodynamics and Heat Transfer" , 4 , 300);
        university.addCourse("Principles of Management" , 3 , 400);
        university.addCourse("Organisational Behaviour" , 2 , 400);
        university.addProfessor("Joyace" , "madwomen@gmail.com" , 400);
        university.assignProfessor(401 , "PR4001");
        university.enroll_Student(10403 , "PR4001");
        university.enroll_Student(10402 , "PR4001");
        university.enroll_Student(10401 , "OR4002");
        System.out.println();
        university.search_course("PR4001");
        System.out.println();
        university.search_course("OR4002");
        university.enroll_Student(2601 , "IN1001");
        university.enroll_Student(2601 , "DA1002");
        university.provide_grade(2601 , "IN1001" , 90);
        university.provide_grade(2601 , "DA1002" , 87.56);
        //university.search_Student(2601);
        //university.search_Professor(401);
        //university.transcript(2601);

        //university.remove_Student(10400);
        //university.find_Student(2600);
        //university.displayStudent_ofDept(400);
        university.addStudent("Rajkumar" , "RajKumar001@gmail.com" , 200);
        university.addProfessor("BroCode","brocodeGreat@gmail.com", 100);
        university.addProfessor("StudyIQ", "StudyIQnews@gmail.com" ,300);
        university.assignProfessor(102 , "IN1001");
        university.assignProfessor(102 , "DA1002");
        university.assignProfessor(301 , "EN3001");
        university.displayProfessors();
        //university.assignProfessor();
        System.out.println();

        //university.displayStudents();
        //university.displayCourses();
        //university.displayProfessors();*/
        //University.save();
        University.load();

        /*for(Student student : University.map_students.values())
        {
            System.out.println(student.name);
        }
        System.out.println(University.stu_count);
        System.out.println();
        for(Professor professor : University.map_professors.values())
        {
            System.out.println(professor.name);
        }
        System.out.println(University.prof_count);

        System.out.println();

        for(Student student : University.map_students.values())
        {
            for(Grade grade : student.student_grades)
            {
                System.out.print(grade.course_id + " " + grade.marks + " " + grade.grade);
            }

        }

        System.out.println();

        for(Professor professor : University.map_professors.values())
        {
            for(Course course : professor.coursesTeaching)
            {
                System.out.print(course.course_id + " " + course.course_name + " " + course.credits + " ");
            }
            System.out.println();
        }*/
        /*for(int key : University.count_stu_of_dept.keySet())
        {
            System.out.println(key + ":" + University.count_stu_of_dept.get(key));
        }
        System.out.println();
        for(int key : University.count_prof_of_dept.keySet())
        {
            System.out.println(key + ":" + University.count_prof_of_dept.get(key));
        }*/
        for(Course course : University.map_courses.values())
        {
            System.out.println(course.course_name);
        }

    }
}