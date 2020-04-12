# sorting - Help with data searching
bubble
-worst   :O(n^2)
-average :O(n^2)
-best    :O(n)

selection 
-worst   :O(n^2)
-average :O(n^2)
-best    :O(n^2)

insertion 
-worst   :O(n^2)
-average :O(n^2)
-best    :O(n^2)

merge 
-worst   :O(nlogn)
-average :O(nlogn)
-best    :O(nlogn)

QuickSort 
-worst   :O(n^2)
-average :O(nlogn)
-best    :O(nlogn)

=================================

배열의 길이를 입력하세요 : 10  
배열의 요소들을 입력하세요 : 80 20 100 50 40 90 70 10 30 60  
INPUT ARRAY : 80 20 100 50 40 90 70 10 30 60

after QuickSort  : 10 20 30 40 50 60 70 80 90 100  
Time spent Quicksorting : 0.000  
80 20 100 50 40 90 70 10 30 60  
20 80 50 40 90 70 10 30 60 100  
20 50 40 80 70 10 30 60 90 100  
20 40 50 70 10 30 60 80 90 100  
20 40 50 10 30 60 70 80 90 100  
20 40 10 30 50 60 70 80 90 100  
20 10 30 40 50 60 70 80 90 100  
10 20 30 40 50 60 70 80 90 100  
10 20 30 40 50 60 70 80 90 100  
10 20 30 40 50 60 70 80 90 100  

after bubbleSort  : 10 20 30 40 50 60 70 80 90 100  
Time spent Bubblesorting : 0.006  
80 20 100 50 40 90 70 10 30 60  
20 80 50 40 90 70 10 30 60 100  
20 50 40 80 70 10 30 60 90 100  
20 40 50 70 10 30 60 80 90 100  
20 40 50 10 30 60 70 80 90 100  
20 40 10 30 50 60 70 80 90 100  
20 10 30 40 50 60 70 80 90 100  
10 20 30 40 50 60 70 80 90 100  

after SelectionSort  : 10 20 30 40 50 60 70 80 90 100  
Time spent Selectionsorting : 0.000  
80 20 100 50 40 90 70 10 30 60  
10 20 100 50 40 90 70 80 30 60  
10 20 30 50 40 90 70 80 100 60  
10 20 30 40 50 90 70 80 100 60  
10 20 30 40 50 60 70 80 100 90  
10 20 30 40 50 60 70 80 90 100  

after insertionSort  : 10 20 30 40 50 60 70 80 90 100  
Time spent Insertionsorting : 0.000  
80 20 100 50 40 90 70 10 30 60  
20 80 100 50 40 90 70 10 30 60  
20 50 80 100 40 90 70 10 30 60  
20 40 50 80 100 90 70 10 30 60  
20 40 50 80 90 100 70 10 30 60  
20 40 50 70 80 90 100 10 30 60  
10 20 40 50 70 80 90 100 30 60  
10 20 30 40 50 70 80 90 100 60  
10 20 30 40 50 60 70 80 90 100  

before merge 80 20 100 50 40 90 70 10 30 60  
left low=0 mid=4  
left low=0 mid=2  
left low=0 mid=1  
left low=0 mid=0  
right m+1=1 high=1  
merge!!! low=0 m+1=0 high=1  
[inmerge] low=0 mid=0 high=1  20 80 100 50 40 90 70 10 30 60  
right m+1=2 high=2  
merge!!! low=0 m+1=1 high=2  
[inmerge] low=0 mid=1 high=2  20 80 100 50 40 90 70 10 30 60  
right m+1=3 high=4  
left low=3 mid=3  
right m+1=4 high=4  
merge!!! low=3 m+1=3 high=4  
[inmerge] low=3 mid=3 high=4  20 80 100 40 50 90 70 10 30 60  
merge!!! low=0 m+1=2 high=4  
[inmerge] low=0 mid=2 high=4  20 40 50 80 100 90 70 10 30 60  
right m+1=5 high=9  
left low=5 mid=7  
left low=5 mid=6  
left low=5 mid=5  
right m+1=6 high=6  
merge!!! low=5 m+1=5 high=6  
[inmerge] low=5 mid=5 high=6  20 40 50 80 100 70 90 10 30 60  
right m+1=7 high=7  
merge!!! low=5 m+1=6 high=7  
[inmerge] low=5 mid=6 high=7  20 40 50 80 100 10 70 90 30 60  
right m+1=8 high=9  
left low=8 mid=8  
right m+1=9 high=9  
merge!!! low=8 m+1=8 high=9  
[inmerge] low=8 mid=8 high=9  20 40 50 80 100 10 70 90 30 60  
merge!!! low=5 m+1=7 high=9  
[inmerge] low=5 mid=7 high=9  20 40 50 80 100 10 30 60 70 90  
merge!!! low=0 m+1=4 high=9  
[inmerge] low=0 mid=4 high=9  10 20 30 40 50 60 70 80 90 100  
after merge 10 20 30 40 50 60 70 80 90 100  