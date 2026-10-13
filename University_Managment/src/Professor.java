import java.util.ArrayList;
public class Professor extends Person
{
    int professor_id;
    String name;
    String email;
    String department;
    ArrayList<Course> coursesTeaching = new ArrayList<>();
}
