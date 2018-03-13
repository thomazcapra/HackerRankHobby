using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static int[] solve(int[] grades) {
        return grades.Select((grade) => 
                             (grade >= 38 && grade % 5 >= 3) 
                             ? (((grade / 5) + 1) * 5) 
                             : grade).ToArray();
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        int[] grades = new int[n];
        for(int grades_i = 0; grades_i < n; grades_i++){
           grades[grades_i] = Convert.ToInt32(Console.ReadLine());   
        }
        int[] result = solve(grades);
        Console.WriteLine(String.Join("\n", result));
        

    }
}