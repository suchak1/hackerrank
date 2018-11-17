import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Grading {

    /*
     * Complete the gradingStudents function below.
     */
    static int[] gradingStudents(int[] grades) {
        
        int[] newGrades = new int[grades.length]; 


        for(int i = 0; i < grades.length; i++)
        {
            int grade = grades[i];
            newGrades[i] = grade;

            if (grade < 38 || grade % 10 < 3)
                continue;
            else if (grade % 10 > 7)
                newGrades[i] += 10 - grade % 10;
            else if (grade % 10 < 5)
                newGrades[i] += 5 - grade % 10;
            
            System.out.println(newGrades[i]);
        }

        return newGrades;
        

    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = Integer.parseInt(scan.nextLine().trim());

        int[] grades = new int[n];

        for (int gradesItr = 0; gradesItr < n; gradesItr++) {
            int gradesItem = Integer.parseInt(scan.nextLine().trim());
            grades[gradesItr] = gradesItem;
        }

        int[] result = gradingStudents(grades);

        for (int resultItr = 0; resultItr < result.length; resultItr++) {
            bw.write(String.valueOf(result[resultItr]));

            if (resultItr != result.length - 1) {
                bw.write("\n");
            }
        }

        bw.newLine();

        bw.close();
    }
}
