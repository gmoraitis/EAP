### Linear Search

#### Problem: 
Given an array arr[] of n elements, write a function to search a given element x in arr[].

#### Examples :

    Input : arr[] = {10, 20, 80, 30, 60, 50, 
                        110, 100, 130, 170}
            x = 110;
    Output : 6
    Element x is present at index 6

    Input : arr[] = {10, 20, 80, 30, 60, 50, 
                        110, 100, 130, 170}
            x = 175;
    Output : -1
    Element x is not present in arr[].

- Start from the leftmost element of array and one by one compare x with each element of array.
- If x matches with an element, return the index.
- If x doesn’t match with any of elements, return -1.
