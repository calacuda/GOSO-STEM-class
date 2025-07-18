#include <algoC.h>

/*
 * "if" clause example.
 *
 * In this example the "if" clause WILL run. This is because, the variable "x"
 * is assigned the value 6 & the "if" clause checks to see that the value of 
 * "x" is integer 6.
 */
void example_1() {
  int x = 6;

  if (x == 6) {
    // do time
  }
}

/*
 * "if" clause example No. 2.
 * 
 * This example is simular to the last example with one key difference.
 *
 * Question 1: What is the difference?
 *
 * Question 2: Will this function run the if clause?
 *
 * Answer 1: The condition from the "if" clause is different.
 *
 * Answer 2: No.
 */
void example_2() {
  int x = 6;

  if (x == 4) {
    // do this
  }
}

/*
 * "if else" example.
 *
 * Here we'll introduce the "else" clasue. This clause runs when the "if"
 * clause before it does NOT run. 
 *
 * Question: Which clause will run in this example?
 *
 * Answer: The "else" clause.
 */
void example_3() {
  int x = 6;

  if (x == 4) {
    // do this
  } else {
    // do that
  }
}

/*
 * "if, else if" example
 *
 * In this example we see the "else if" clause. This clause run when all
 * previous clauses do NOT run, & when it runs no clause after it runs.
 * In other words only one clause in a conditional runs.
 */
void example_4() {
  int x = 6;

  if (x < 4) {
    // do this
  } else if (x < 8) {
    // do that
  }
}

/*
 * "if, else if, else" example
 *
 * This example demostrates the addition of an "else" clause to the previous
 * "else if" clause example.
 * 
 * Remember; ONLY ONE clause in a conditional runs. When a clause runs all
 * other clauses after it get skipped.
 *
 * Question: Which clause runs?
 *
 * Answer: The else clause.
 */
void example_5() {
  int x = 6;

  if (x < 4) {
    // do this
  } else if (x < 5) {
    // do that
  } else {
    // do other thing
  }
}

/*
 * Mulitple "else if" clauses example
 *
 * This example demostrates the addition of mulitple "else if" clauses.
 * 
 * Question: Which clause runs?
 *
 * Answer: The "if x < 7" clause, & only that clause.
 * 
 * Why? becuase "x" is 6 and thus it is not less then, 0, 1, 2, 3, 4, 5, or 6,
 * AND, only one clause in a conditional runs. So as soon as then "if x < 7" 
 * clause runs, teh conditional stops running.
 */
void challenge_1 () {
  int x = 6;

  if (x < 0) {
    // do this
  } else if (x < 1) {
    // do that
  } else if (x < 2) {
    // do that
  } else if (x < 3) {
    // do that
  } else if (x < 4) {
    // do that
  } else if (x < 5) {
    // do that
  } else if (x < 6) {
    // do that
  } else if (x < 7) {
    // do that
  } else if (x < 8) {
    // do that
  } else if (x < 9) {
    // do that
  } else {
    // do the default thing
  }
}

void applicaiton(ALGOC_APP) {
  // examples
  example_1();
  example_2();
  example_3();
  example_4();
  example_5();

  // challenges
  challenge_1();
}
