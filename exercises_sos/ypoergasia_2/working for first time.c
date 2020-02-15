// #include<stdio.h>
// int main()
// {
//   int num, i=0, x, d;
//   char * word_no [2000];
//   printf ("Enter an integer value: \n");
//   scanf ("%d", &num);
//   while (num)
//   {
//     d = num %10;
//     num = num /10;
//     switch(d)
//     {
//       case 0: word_no[i++] = "zero";
//       break;
//       case 1: word_no[i++] = "one";
//       break;
//       case 2: word_no[i++] = "two";
//       break;
//       case 3: word_no[i++] = "three";
//       break;
//       case 4: word_no [i++] = "four";
//       break;
//       case 5: word_no [i++] = "five";
//       break;
//       case 6: word_no [i++] = "six";
//       break;
//       case 7: word_no [i++] = "seven";
//       break;
//       case 8: word_no [i++] = "eight";
//       break;
//       case 9: word_no[i++] = "nine";
//       break;
//       case 10: word_no[i++] = "δεκα";
//       break;
//       case 11: word_no[i++] = "εντεκα";
//       break;
//       case 12: word_no[i++] = "δωδεκα";
//       break;
//       case 13: word_no[i++] = "δεκατρια";
//       break;
//       case 14: word_no[i++] = "δεκατεσσερα";
//       break;
//       case 15: word_no[i++] = "δεκαπεντε";
//       break;
//       case 16: word_no[i++] = "δεκαεξι";
//       break;
//       case 17: word_no[i++] = "δεκαεπτα";
//       break;
//       case 18: word_no[i++] = "δεκαοκτω";
//       break;
//       case 19: word_no[i++] = "δεκαεννια";
//       break;
//       case 20: word_no[i++] = "εικοσι";
//       break;

//     }
//   }
//   for(x=i-1; x>=0; x--){
//   printf ("%s ",word_no[x]);
//   }
// }

/* C program to print a given number in words. The program handles 
numbers from 0 to 9999 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* A function that prints given number in words */
void convert_to_words(char *num)
{
  int len = strlen(num); // Get number of digits in given number

  /* Base cases */
  if (len == 0)
  {
    fprintf(stderr, "empty string\n");
    return;
  }
  if (len > 3)
  {
    fprintf(stderr, "Length more than 3 is not supported\n");
    return;
  }

  /* The first string is not used, it is to make 
		array indexing simple */
  char *single_digits[] = {"μηδεν", "ενα", "δυο",
                           "τρια", "τεσσερα", "πεντε",
                           "εξι", "επτα", "οκτω", "εννια"};

  /* The first string is not used, it is to make 
		array indexing simple */
  char *two_digits[] = {"", "δεκα", "εντεκα", "δωδεκα",
                        "δεκατρια", "δεκατεσσερα",
                        "δεκαπεντε", "δεκαεξι",
                        "δεκαεπτα", "δεκαοκτω", "δεκαεννια"};

  /* The first two string are not used, they are to make 
		array indexing simple*/
  char *tens_multiple[] = {"", "", "εικοσι", "τριαντα", "σαραντα", "πενηντα",
                           "εξηντα", "εβδομηντα", "ογδοντα", "ενενιντα"};

  char *tens_power[] = {"εκατον", "διακοσια", "τριακοσια",
                        "τετρακοσια", "πεντακοσια", "εξακοσια", "επτακοσια", "οκτακοσια", "εννιακοσια"};

  /* Used for debugging purpose only */
  printf("\n%s: ", num);

  /* For single digit number */
  if (len == 1)
  {
    printf("%s\n", single_digits[*num - '0']);
    return;
  }

  /* Iterate while num is not '\0' */
  while (*num != '\0')
  {

    /* Code path for first 2 digits */
    if (len >= 3)
    {
      if (*num - '0' != 0)
      {
        //printf("%s ", single_digits[*num - '0']);
        printf("%s ",tens_power[*num - '1'] ); // here len can be 3 or 4
      }
      --len;
    }
// tens_power[len - 3]
    /* Code path for last 2 digits */
    else
    {
      /* Need to explicitly handle 10-19. Sum of the two digits is 
			used as index of "two_digits" array of strings */
      if (*num == '1')
      {
        int sum = *num - '0' + *(num + 1) - '0';
        printf("%s\n", two_digits[sum]);
        return;
      }

      /* Need to explicitely handle 20 */
      else if (*num == '2' && *(num + 1) == '0')
      {
        printf("twenty\n");
        return;
      }

      /* Rest of the two digit numbers i.e., 21 to 99 */
      else
      {
        int i = *num - '0';
        printf("%s ", i ? tens_multiple[i] : "");
        ++num;
        if (*num != '0')
          printf("%s ", single_digits[*num - '0']);
      }
    }
    ++num;
  }
}

/* Driver program to test above function */
int main(void)
{
  convert_to_words("573");
  convert_to_words("135");
  convert_to_words("77");
  convert_to_words("23");
  convert_to_words("18");

  return 0;
}
