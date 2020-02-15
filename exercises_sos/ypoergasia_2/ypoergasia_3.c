
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

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

  /* Used for debugging purpose only αυτο να βγει*/
  printf("\n%s: ", num);

  /* Για μονο αριθμο */
  if (len == 1)
  {
    printf("%s\n", single_digits[*num - '0']);
    return;
  }

  /* Για οταν το num δεν ειναι '\0' */
  while (*num != '\0')
  {

    /* Code path for first 1 digit */
    if (len >= 3)
    {
      if (*num - '0' != 0)
      {
        //printf("%s ", single_digits[*num - '0']);
        printf("%s ",tens_power[*num - '1'] ); 
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
  convert_to_words("442");
  convert_to_words("135");
  convert_to_words("77");
  convert_to_words("23");
  convert_to_words("18");
  convert_to_words("1");
  convert_to_words("0");


  return 0;
}
