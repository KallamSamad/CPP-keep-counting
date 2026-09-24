# Randomly generated sum quiz

I translated what I did in c# to create a cpp program which does the same thing.

# Features

## Random number generation:
- I used the rand() method to generate a value by finding the modulus of the rand() divided by the difference between my maximum and minimum constants, plus  1
- I then added the Minimum value to this
- I then seeded the number generator once srand and used time as a parameter which gives a different random number per unit time
- For the operator randomness I did an if (rand() < (RAND_MAX / 2)) condition which generates a random number. If that number lands in the lower half of the possible range, if runs or else. Basically this gives a 50/50 chance of either + or - sums.
 

## For loop sums
- I used a for loop to output each question with a cin to compare it to the answer - if true, add to the counter, else output error message with answer
- I then displayed their score
## Screenshot
<img width="621" height="457" alt="image" src="https://github.com/user-attachments/assets/3805266c-64ba-4a74-8693-1c44206a51cf" />
