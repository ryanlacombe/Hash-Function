| Ryan LaCombe |
|:---       |
| s198023 |
| Introduction to C++ |
| Hash Function Documentation |

## I. Requirements

1. Description of problem:
    - **Name:** Hash Function Demonstration

    - **Problem Statement:** Creation of a program that sufficiently displays a custom Hash Function.

    - **Problem Specifications:** The program must be console based and execute without crashing.

2. Output Information
    - The program displays a hex code scrabled by use of the hash function.

## II. Design

1. _System Architecture_

|
|:--------------- |
Main Loop:

The program takes in information through the coder and outputs the jumbled hexcode to the console.

2. ### Object Information

    **File:** HashFunction.h

        Description: Used to hold all the hash functions necessary for the program specifications.

        **Attributes:**

            Name: HashFunc
                Description: A constructor used for each hash function.
                Type: std::function
            
            Name: badHash
                Description: An inplementation of a basic addition hash.
                Type: unsigned int

            Name: BKDRHash
                Description: An example of a basic advanced hash function.
                Type: unsigned int

            Name: colorHash
                Description: Hash function that outputs a color hex code.
                Type: unsigned int

            Name: customHash
                Description: A custom hash function that outputs a large number into a three to four number long hex code.
                Type: unsigned int

            Name: defaultHash
                Description: A variable that helps determine the default has function.
                Type: static HashFunc