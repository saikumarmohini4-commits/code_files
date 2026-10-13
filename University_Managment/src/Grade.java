public class Grade
{
    int student_id;
    String course_id;
    double marks = '\0';
    char grade;
    public void assign_grade()
    {
        if(marks != '\0')
        {
            if(this.marks >= 80 && this.marks <= 100)
            {
                this.grade = 'A';
            }
            else if(this.marks >= 60 && this.marks <= 70)
            {
                this.grade = 'B';
            }
            else if(this.marks >= 40 && this.marks <= 50)
            {
                this.grade = 'C';
            }
            else
            {
                this.grade = 'D';
            }
        }
        else
        {
            System.out.println("The marks has not been assigned!");
        }
    }
}
