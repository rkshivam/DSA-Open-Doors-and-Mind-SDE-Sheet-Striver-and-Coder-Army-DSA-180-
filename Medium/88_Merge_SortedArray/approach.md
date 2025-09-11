Intuition
First thought is like , what is the meaning of non - decreasing order , so it mean's increase hoga but usme same number aa sakta hai but chota nahi , in simple [2,3,4,5,5,5,6,7] isme jaise 5 three times aaya hai toh yeh hota non - decreasing , agr strictitly likha hota toh yeh bhi hota sirf increase he hota ... Main confusion like nums1 mai wo Zero kyo diya hai in simple nums1 have its own element with the space of nums2 so that uske element ko bhi dal sake and this done with three pointer .

Approach
Firstly kuch samj nahi aa rha tha , then thoda sa code dekha just starting and striver ki SDE sheet chl rahi hai toh , usse bhi thoda sa idea mil gya.

know i took 3-4 hr to debug it bcz , starting mai 3rd case issue karha tha then uske liye thoda chnage kiya tha code , but uske karn further case 48 and 49 chl he nahi rha tha then uss block ko comment kiya then run hogaya , you can see that blcok in code

Main thing is pointer placing .
1)Ponter a nums1 ke last element per .
2)Pointer b nums2 ke last element per .
3)pointer c nums ke last per , mtlb nums1 have elements n+m , so pointer c ko n+m-1 per rkhana hai whai pointer a , m-1 per.

Complexity
Time complexity:
O(N+M) , simple nums1 ka size he define kar rha hai time complexity , bcz utna time he while loop excute hoga .
Why not O(N^2) , bcz no nested loop.
Why not O(logN) , bcz no binary search.

Space complexity:
O(1) , bcz hum koi extra space use nahi kar rhe hai , jo bhi nums1 mai change ho rha hai wo direct orginal array mai ho rha hai , check the function refrence of nums1 is passed yani direct usme he chnage ho rha h.

Code
