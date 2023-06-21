# Pclub-secy recruitment task-Task 1
Problem Statement:
You are a very extroverted person. Naturally, two of your friends, Anahita and Varun, come to visit you on a Sunday. You think of serving sweets to them. But soon you realize they are not on talking terms with each other, so you will have to serve them sweets in different bowls.The sweetness value of all sweets you have is known.  


You like Anahita more than Varun. So, the total sweetness value of sweets you serve to Anahita is $m$ times that of Varun. Also, you don't like the sweet quite much, so you want to distribute all of the sweets. 

Determine whether it is possible to distribute all of the sweets in such a way. 

Editorial:For validation, it is quite easy to solve once we get a function that returns true if a particular sum can be made using some values in an array. This can be achieved through 2-d dp 
where each dp state, dp[i][j],i<=n,j<=sum of all values in the array, represents whether or not target sum =j can be achieved using the first i terms.


Overall the problem can be Solved in O(n*w), where w is the sum of sweetness of all sweets.

P.S.:Initially, I had added a part 2 of the question:
Second line in output contains the sweetness values of the sweets served to Varun, in any order, as space-separated integers.If there are multiple correct outputs,print one of them.Second part can be done using recursion and memoisation, printing a number if the target sum can be made using that index sweet and not from sweets with index less than it.My solution also contains its working code bu I have commented it out, because I was facing problem in making its checker function, so I skipped that part.
