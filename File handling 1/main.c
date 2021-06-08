#include <stdlib.h>
#include <stdio.h>

int main(void) {
  // creating a FILE variable
  FILE *fptr;
  FILE *fptr2;

  // integer variable
  int id, math, science, english, totalgrade;
  int id2, math2, science2, english2, totalgrade2;
  int i, m, s, e, t, a;
  int i2, m2, s2, e2, t2, a2;

  float averagegrade,averagegrade2;


  // character variable
  char name[255];
  char n[255];

  char name2[255] ;
  char n2[255];

  // open the file in write mode
  fptr = fopen("student", "w");

  if (fptr != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    // exit status for OS that an error occured
    return -1;
  }

  // get FIRST student detail
  printf("\nEnter student name: ");
  gets(name);
  // STUDENT ID
  printf("Enter student ID: ");
  scanf("%d", &id);
  // MATH
  printf("Math Grade: ");
  scanf("%d", &math);
  // SCIENCE
  printf("Science Grade: ");
  scanf("%d", &science);
  // ENGLISH
  printf("English Grade: ");
  scanf("%d", &english);

  totalgrade = math + science + english;
  averagegrade = totalgrade / 3;


   // write data in file
  fprintf(fptr, "Name:%s\nID:%d\nMath:%d\nScience:%d\nEnglish:%d\nTotal Grade:%d\nAverage Grade:%.2f\n", name, id, math, science, english, totalgrade, averagegrade);

  // close connection
  fclose(fptr);



    // open the file in write mode
  fptr2 = fopen("student2", "w");

   if (fptr2 != NULL) {
    printf("\nFile created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    // exit status for OS that an error occured
    return -1;
  }

  // get SECOND student detail
  printf("\nEnter student 2 name: ");
  scanf ("%s",name2);
  // STUDENT ID 2
  printf("Enter student ID: ");
  scanf("%d", &id2);
  // MATH 2
  printf("Math Grade: ");
  scanf("%d", &math2);
  // SCIENCE 2
  printf("Science Grade: ");
  scanf("%d", &science2);
  // ENGLISH 2
  printf("English Grade: ");
  scanf("%d", &english2);

  totalgrade2 = math2 + science2 + english2;
  averagegrade2 = totalgrade2 / 3;

  // write data in file
  fprintf(fptr2, "Name:%s\nID:%d\nMath:%d\nScience:%d\nEnglish:%d\nTotal Grade:%d\nAverage Grade:%.2f\n", name2, id2, math2, science2, english2, totalgrade2, averagegrade2);

  // close connection
  fclose(fptr2);


  // open file for reading
  fptr = fopen("student", "r");
  fptr2 = fopen("student2", "r");



  // close connection
  fclose(fptr);
    fclose(fptr2);

  return 0;
}
