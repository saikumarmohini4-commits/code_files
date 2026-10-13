import java.io.*;
import java.util.*;
public class University
{
    private void create_departments()
    {
        Department department1 = new Department();
        Department department2 = new Department();
        Department department3 = new Department();
        Department department4 = new Department();
        department1.dept_id = 100;
        department1.dept_name = "BS-Computer_Science";
        department2.dept_id = 200;
        department2.dept_name = "Electrical & Electronics Engineering";
        department3.dept_id = 300;
        department3.dept_name = "Mechanical Engineering";
        department4.dept_id = 400;
        department4.dept_name = "Business Administration";
        departments.add(department1);
        departments.add(department2);
        departments.add(department3);
        departments.add(department4);
    }
    static ArrayList<Integer> dept_ids = new ArrayList<>(Arrays.asList(100 , 200 , 300 , 400));
    static int stu_count = 0;
    static int prof_count = 0;
    static int course_count = 0;
    static HashMap<Integer , Student> map_students = new HashMap<>();
    static HashMap<Integer , Professor> map_professors = new HashMap<>();
    static HashMap<Integer , Course> map_courses = new HashMap<>();
    static HashMap<Integer , Integer> count_stu_of_dept = new HashMap<>(){{
        put(100 , 0);
        put(200 , 0);
        put(300 , 0);
        put(400 , 0);
    }};
    static HashMap<Integer , Integer> count_prof_of_dept = new HashMap<>(){{
        put(100 , 0);
        put(200 , 0);
        put(300 , 0);
        put(400 , 0);
    }};
    static HashMap<Integer , Integer> count_course_of_dept = new HashMap<>(){{
        put(100 , 0);
        put(200 , 0);
        put(300 , 0);
        put(400 , 0);
    }};
    static ArrayList <Department> departments = new ArrayList<>();
    University()
    {
        create_departments();
    }

    // Student Management.......................
    public void addStudent(String stu_name , String email , int department_id)
    {
        if(dept_ids.contains(department_id))
        {
            boolean found = false;
            for(Student student : map_students.values())
            {
                if(student.email.equals(email))
                {
                    System.out.println("Student Already Exists in department of " + student.department);
                    found = true;
                    break;
                }
            }
            if(!found) {
                Student student = new Student();
                student.name = stu_name;
                student.email = email;
                for (Department department : departments) {
                    if (department.dept_id == department_id) {
                        student.department = department.dept_name;
                        department.students.add(student);
                        int i = count_stu_of_dept.get(department_id);
                        i++;
                        count_stu_of_dept.put(department_id, i);
                        break;
                    }
                }
                stu_count++;
                student.student_id = department_id * 26 + count_stu_of_dept.get(department_id);
                map_students.put(stu_count, student);
            }
        }
        else
        {
            System.out.println("Given Department Id do not exist!");
        }
    }
    public void find_Student(int roll_no)
    {
        int found = 0;
        for(Student student : map_students.values())
        {
            if(roll_no == student.student_id)
            {
                found = 1;
                System.out.println(student.name + "\n" + student.student_id + "\n" + student.email + "\n" +
                        student.department);
                break;
            }
        }
        if(found == 0)
        {
            System.out.println("No student with such name exists!");
        }
    }
    public void remove_Student(int roll_no)
    {
        int i = 1;
        for(Student student : map_students.values())
        {
            if(roll_no == student.student_id)
            {
                System.out.println(map_students.get(i).name + " " + map_students.get(i).student_id + " " +
                        "has been removed from the database");
                map_students.remove(i);
                for(Department department : departments)
                {
                    if(department.dept_name.equals(student.department))
                    {
                        department.students.remove(student);
                        int j = count_stu_of_dept.get(department.dept_id);
                        j--;
                        count_stu_of_dept.put(department.dept_id , j);
                        break;
                    }
                }
                break;
            }
            i++;
        }
    }
    public void displayStudents()
    {
        for(Student student : map_students.values())
        {
            System.out.println(student.name + " " + student.student_id + " " + student.department);
        }
    }
    public void displayStudent_ofDept(int dept_id)
    {
        if(count_stu_of_dept.containsKey(dept_id))
        {
            System.out.println("Total no. of students in " + dept_id + " :" + count_stu_of_dept.get(dept_id));
            System.out.println();
            for(Department department : departments)
            {
                if(department.dept_id == dept_id)
                {
                    for(Student student : department.students)
                    {
                        System.out.println(student.name + " " + student.student_id);
                    }
                    break;
                }
            }
        }
        else
        {
            System.out.println("NO such department Id exists!");
        }
    }

    //Faculty Management....................
    public void addProfessor(String name , String email , int department_id)
    {

        if(dept_ids.contains(department_id))
        {
            boolean found = false;
            for(Professor professor : map_professors.values())
            {
                if(professor.email.equals(email))
                {
                    found = true;
                    System.out.println("Given Professor details already exists in department of " + professor.department);
                    break;
                }
            }
            if(!found)
            {
                Professor professor = new Professor();
                professor.name = name;
                professor.email = email;
                for(Department department : departments)
                {
                    if(department_id == department.dept_id)
                    {
                        professor.department = department.dept_name;
                        department.professors.add(professor);
                        int i = count_prof_of_dept.get(department_id);
                        i++;
                        count_prof_of_dept.put(department_id , i);
                        break;
                    }
                }
                prof_count++;
                professor.professor_id = department_id + count_prof_of_dept.get(department_id);
                map_professors.put(prof_count , professor);
            }
        }
        else
        {
            System.out.println("Department Id do not exists!");
        }
    }
    public void findProfessor(int prof_id)
    {
        int found = 0;
        for(Professor professor : map_professors.values())
        {
            if(professor.professor_id == prof_id)
            {
                found = 1;
                System.out.println(professor.professor_id + "\n" + professor.name + "\n" + professor.email + "\n"
                + professor.department);
                break;
            }
        }
        if(found == 0)
        {
            System.out.println("No professor with such id exists!");
        }
    }
    public void removeProfessor(int prof_id , String prof_name)
    {
        int i = 1;
        int found = 0;
        for(Professor professor : map_professors.values())
        {
            if(professor.name.equals(prof_name) || professor.professor_id == prof_id)
            {
                found = 1;
                map_professors.remove(i);
                for(Department department : departments)
                {
                    if(department.dept_name.equals(professor.department))
                    {
                        department.professors.remove(professor);
                        int j = count_prof_of_dept.get(department.dept_id);
                        j--;
                        count_prof_of_dept.put(department.dept_id , j);
                        break;
                    }
                }
                break;
            }
            i++;
        }
        if(found == 0)
        {
            System.out.println("No such Name or ID Exists!");
        }
    }
    public void displayProfessors()
    {
        for(Professor professor : map_professors.values())
        {
            System.out.println(professor.professor_id + " " + professor.name + " " + professor.department);
        }
    }

    //Course Management..............
    public void addCourse(String course_name , int credits , int dept_id)
    {
        if(dept_ids.contains(dept_id))
        {
            boolean found = false;
            for(Course course : map_courses.values())
            {
                if(course.course_name.equals(course_name))
                {
                    found = true;
                    System.out.println("Given course already exists!");
                    break;
                }
            }
            if(!found)
            {
                Course course = new Course();
                course.course_name = course_name;
                course.credits = credits;
                course.department_id = dept_id;
                for(Department department : departments)
                {
                    if(department.dept_id == dept_id)
                    {

                        department.courses.add(course);
                        int i = count_course_of_dept.get(dept_id);
                        i++;
                        count_course_of_dept.put(dept_id , i);
                        break;
                    }
                }
                course_count++;
                course.course_id = course_name.substring(0 , 2).toUpperCase() + Integer.toString(dept_id) + count_course_of_dept.get(dept_id);
                map_courses.put(course_count , course);
            }
        }
        else
        {
            System.out.println("Given dept_id do not exists!");
        }
    }
    public void findCourse(String course_id)
    {
        int found = 0;
        for(Course course : map_courses.values())
        {
            if(course.course_id.equals(course_id))
            {
                found = 1;
                System.out.println(course.course_name + "\n" + course.credits);
                break;
            }
        }
        if(found == 0)
        {
            System.out.println("Given Course Id Do not exist!");
        }
    }
    public void removeCourse(String course_id)
    {
        int found = 0;
        int i = 1;
        for(Course course : map_courses.values())
        {
            if(course.course_id.equals(course_id))
            {
                found = 1;
                map_courses.remove(i);
                for(Department department : departments)
                {
                    if(department.dept_id == course.department_id)
                    {
                        department.courses.remove(course);
                        int j = count_course_of_dept.get(department.dept_id);
                        j--;
                        count_course_of_dept.put(department.dept_id , j);
                        break;
                    }
                }
                break;
            }
            i++;
        }
        if(found == 0)
        {
            System.out.println("No such course_id exist");
        }
    }
    public void displayCourses()
    {
        for(Course course : map_courses.values())
        {
            System.out.println(course.course_name + " " + course.course_id + " " + course.credits);
        }
    }
    // to assign a professor to teach a course......
    public void assignProfessor(int prof_id , String Course_id)
    {
        boolean[] found = {false , false};
        int i = 0;
        String name = null;
        String course_name = null;
        for(Department department : departments)
        {
            for(Professor professor : department.professors)
            {
                if(prof_id == professor.professor_id)
                {
                    found[i] = true;
                    name = professor.name;
                    i++;
                    for(Course course : department.courses)
                    {
                        if(Course_id.equals(course.course_id))
                        {
                            found[i] = true;
                            course_name = course.course_name;
                            course.professor = professor.name;
                            professor.coursesTeaching.add(course);
                            break;
                        }
                    }
                }
            }
            if(found[0] && found[1])
            {
                System.out.println("Professor " + name + " has been assigned to " + course_name);
                break;
            }
        }
        if((!found[0] && !found[1]) || !found[0] || !found[1])
        {
            System.out.println("Failed to assign!");
        }
    }
    //to enroll student to a course.......
    public void enroll_Student(int student_id , String course_id)
    {
        boolean[] found = {false , false};
        int i = 0;
        String stu_name = null , cour_name = null;
        for(Student student : map_students.values())
        {
            if(student.student_id == student_id)
            {
                found[i] = true;
                stu_name = student.name;
                i++;
                for(Course course : map_courses.values())
                {
                    if(course.course_id.equals(course_id))
                    {
                        found[i] = true;
                        cour_name = course.course_name;
                        course.students.add(student);
                        break;
                    }
                }
                if(found[0] && found[1])
                {
                    System.out.println(stu_name + " has been assigned to the " + cour_name);
                    break;
                }
            }
        }
        if((!found[0] && !found[1]) || !found[0] || !found[1])
        {
            System.out.println("The given student_id or course_id do not exist!");
        }
    }
    // to remove student from the enrollment from the course.......
    public void d_enroll_Student(int student_id , String course_id)
    {
        boolean[] found = {false , false};
        int i = 0;
        for(Course course : map_courses.values())
        {
            if(course.course_id.equals(course_id))
            {
                found[i] = true;
                i++;
                for(Student student : course.students)
                {
                    if(student.student_id == student_id)
                    {
                        found[i] = true;
                        course.students.remove(student);
                        break;
                    }
                }
                if(found[0] && found[1])
                {
                    System.out.println("student has been successfully removed!");
                    break;
                }
            }
        }
        if((!found[0] && !found[1]) || !found[0] || !found[1])
        {
            System.out.println("Given student_id or course_id do not exist!");
        }
    }
    //to give grades to the students belongs to a dept of each course......
    public void provide_grade(int stu_id , String cour_id , double marks)
    {
        boolean[] found = {false , false , false};
        int i = 0;
        for(Student student : map_students.values())
        {
            if(student.student_id == stu_id)
            {
                found[i] = true;
                i++;
                for(Course course : map_courses.values())
                {
                    if(course.course_id.equals(cour_id))
                    {
                        found[i] = true;
                        i++;
                        if(course.students.contains(student))
                        {
                            found[i] = true;
                            Grade grade = new Grade();
                            grade.student_id = stu_id;
                            grade.course_id = cour_id;
                            grade.marks = marks;
                            grade.assign_grade();
                            student.student_grades.add(grade);
                        }
                        break;
                    }
                }
                if(found[0] && found[1] && found[2])
                {
                    System.out.println(0);
                    break;
                }
            }
        }
        if((!found[0] && !found[1] && !found[2]) || !found[0] || !found[1] || !found[2])
        {
            System.out.println(-1);
        }
    }
    //top view student grades in each of the course he/she enrolled...........
    public void transcript(int student_id)
    {
        for(Student student : map_students.values())
        {
            if(student.student_id == student_id)
            {
                System.out.println("============= Transcript =============");
                System.out.println("Student : " + student.name);
                System.out.println("ID : " + student.student_id);
                System.out.println("Course               marks     Grades");
                System.out.println("--------------------------------------");
                for(Grade grade : student.student_grades)
                {
                    for(Course course: map_courses.values())
                    {
                        if(grade.course_id.equals(course.course_id))
                        {
                            System.out.println(course.course_name + "           " + grade.marks + "     " +grade.grade);
                            break;
                        }
                    }
                }
            }
        }
    }
    // To search a student among the students in the university hashmap......
    public void search_Student(int student_id)
    {
        boolean found = false;
        for(Student student : map_students.values())
        {
            if(student.student_id == student_id)
            {
                found = true;
                System.out.println(student.student_id);
                System.out.println(student.name);
                System.out.println(student.department);
                System.out.println("Courses:");
                int found2 = 0;
                for(Course course : map_courses.values())
                {
                    if(course.students.contains(student))
                    {
                        found2 = 1;
                        System.out.println("-" + course.course_name);
                    }
                }
                if(found2 == 0)
                {
                    System.out.println("NULL");
                }
                break;
            }
        }
        if(!found)
        {
            System.out.println("Given student Id do not exist!");
        }
    }
    //to search a professor among professors in the university Hashmaps.....
    public void search_Professor(int prof_id)
    {
        boolean found = false;
        for(Professor professor : map_professors.values())
        {
            if(professor.professor_id == prof_id)
            {
                found = true;
                System.out.println(professor.professor_id);
                System.out.println(professor.name);
                System.out.println(professor.department);
                System.out.println("Courses Teaching: ");
                for(Course course : professor.coursesTeaching)
                {
                    System.out.println(course.course_name);
                }
                break;
            }
        }
        if(!found)
        {
            System.out.println("Professor ID do not exist!");
        }
    }
    //To search a course in the Hashmaps
    public void search_course(String cour_id) {
        boolean found = false;
        for (Course course : map_courses.values()) {
            if (course.course_id.equals(cour_id)) {
                found = true;
                System.out.println("Department_ID : " + course.department_id);
                System.out.println(course.course_name);
                System.out.println("Course ID : " + course.course_id);
                System.out.println("Credits : " + course.credits);
                System.out.println("Professor Incharge : " + course.professor);
                int student_count = 0;
                for (Student student : course.students) {
                    student_count++;
                }
                System.out.println("Students Enrolled: " + student_count);
                break;
            }
        }
        if (!found) {
            System.out.println("Given course Id do not exist!");
        }
    }
    // to save all the data in txt files
    public static void save()
    {
        try(BufferedWriter writer = new BufferedWriter(new FileWriter("/Users/saikumarmohini/Documents/Java_Projects/University_Managment/src/students.txt")))
        {
            for(Student student : map_students.values())
            {
                writer.write(student.student_id + "," +
                        student.name +"," + student.email + "," + student.department);
                if(!student.student_grades.isEmpty())
                {
                    writer.write(",");
                    for(Grade grade : student.student_grades)
                    {
                        writer.write(grade.course_id + "," + grade.marks + "," + grade.grade + ",");
                    }
                }
                writer.newLine();
            }
            System.out.println("Data Saved!");
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
        try(BufferedWriter writer = new BufferedWriter(new FileWriter("/Users/saikumarmohini/Documents/Java_Projects/University_Managment/src/professors_data.txt")))
        {
            for(Professor professor  : map_professors.values())
            {
                writer.write(professor.professor_id + "," +
                        professor.name +"," + professor.email + "," + professor.department);
                if(!professor.coursesTeaching.isEmpty())
                {
                    writer.write(",");
                    for(Course course : professor.coursesTeaching)
                    {
                        writer.write(course.course_id + "," + course.course_name + "," + course.credits + "," +
                                course.department_id + ",");
                    }
                }
                writer.newLine();
            }
            System.out.println("Data Saved!");
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
        try(BufferedWriter writer = new BufferedWriter(new FileWriter("/Users/saikumarmohini/Documents/Java_Projects/University_Managment/src/courses_data.txt")))
        {
            for(Course course : map_courses.values())
            {
                writer.write(course.course_id + "," + course.course_name + "," + course.credits + "," +
                        course.professor + "," + course.department_id + ",");
                if(!course.students.isEmpty())
                {
                    for(Student student : course.students)
                    {
                        writer.write(student.student_id + ",");
                    }
                }
                writer.newLine();
            }
            System.out.println("Data saved!");
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }
    // to load all the data
    public static void load()
    {
        try(BufferedReader reader = new BufferedReader(new FileReader("/Users/saikumarmohini/Documents/Java_Projects/University_Managment/src/students.txt")))
        {
            String line = null;
            int count = 0;
            while((line = reader.readLine()) != null)
            {
                count++;
                String[] line_array = line.split(",");
                Student student = new Student();
                student.student_id = Integer.parseInt(line_array[0]);
                student.name = line_array[1];
                student.email = line_array[2];
                student.department = line_array[3];
                for(Department department : departments)
                {
                    if(student.department.equals(department.dept_name))
                    {
                        department.students.add(student);
                        int i = count_stu_of_dept.get(department.dept_id);
                        i++;
                        count_stu_of_dept.put(department.dept_id , i);
                        break;
                    }
                }
                if(line_array.length > 4)
                {
                    for(int i = 4; i <= line_array.length - 3; i = i + 3)
                    {
                        Grade grade = new Grade();
                        grade.student_id = student.student_id;
                        grade.course_id = line_array[i];
                        grade.marks = Double.parseDouble(line_array[i + 1]);
                        grade.grade = line_array[i + 2].charAt(0);
                        student.student_grades.add(grade);
                    }
                }
                map_students.put(count , student);
            }
            stu_count = count;
            System.out.println("Data Loaded Successfully!");
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
        try(BufferedReader reader = new BufferedReader(new FileReader("/Users/saikumarmohini/Documents/Java_Projects/University_Managment/src/professors_data.txt")))
        {
            String line = null;
            int count = 0;
            while((line = reader.readLine()) != null)
            {
                count++;
                String[] line_array = line.split(",");
                Professor professor = new Professor();
                professor.professor_id = Integer.parseInt(line_array[0]);
                professor.name = line_array[1];
                professor.email = line_array[2];
                professor.department = line_array[3];
                for(Department department : departments)
                {
                    if(professor.department.equals(department.dept_name))
                    {
                        department.professors.add(professor);
                        int i = count_prof_of_dept.get(department.dept_id);
                        i++;
                        count_prof_of_dept.put(department.dept_id , i);
                        break;
                    }
                }
                if(line_array.length > 4)
                {
                    for(int i = 4; i <= line_array.length - 4; i = i + 4)
                    {
                        Course course = new Course();
                        course.course_id = line_array[i];
                        course.course_name = line_array[i + 1];
                        course.credits = Integer.parseInt(line_array[i + 2]);
                        course.department_id = Integer.parseInt(line_array[i+3]);
                        professor.coursesTeaching.add(course);
                    }
                }
                map_professors.put(count , professor);
            }
            prof_count = count;
            System.out.println("Data Loaded Successfully!");
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
        try(BufferedReader reader = new BufferedReader(new FileReader("/Users/saikumarmohini/Documents/Java_Projects/University_Managment/src/courses_data.txt")))
        {
            String line = null;
            int count = 0;
            while((line = reader.readLine()) != null)
            {
                count++;
                String[] line_array = line.split(",");
                Course course = new Course();
                course.course_id = line_array[0];
                course.course_name = line_array[1];
                course.credits = Integer.parseInt(line_array[2]);
                course.professor = line_array[3];
                course.department_id = Integer.parseInt(line_array[4]);
                for(Department department : departments)
                {
                    if(course.department_id == department.dept_id)
                    {
                        department.courses.add(course);
                        int i = count_course_of_dept.get(department.dept_id);
                        i++;
                        count_course_of_dept.put(department.dept_id , i);
                        break;
                    }
                }
                if(line_array.length > 5)
                {
                    for(int i = 5; i < line_array.length; i++)
                    {
                        for(Student student : map_students.values())
                        {
                            if(Integer.parseInt(line_array[i]) == student.student_id)
                            {
                                course.students.add(student);
                                break;
                            }
                        }
                    }
                }
                map_courses.put(count , course);
            }
            course_count = count;
            System.out.println("Data loaded successfully");
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }
}
