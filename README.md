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

=============================================

file load(1000 testcase)
351 475 298 988 631 551 183 369 828 524 391 614 997 322 296 130 462 929 673 3 9 489 311 801 148 785 690 714 216 236 830 929 909 369 213 629 841 506 31 68 679 262 441 846 804 947 555 30 94 838 217 506 983 502 783 237 605 478 65 560 651 462 904 142 6 435 957 649 764 523 934 66 879 213 495 152 872 819 166 730 418 903 695 679 740 45 533 539 789 81 104 60 972 196 299 380 429 853 75 160 953 315 413 245 469 687 515 680 599 686 793 335 893 566 800 697 433 608 538 754 335 301 688 226 264 1 933 488 932 485 577 799 1 582 365 107 978 275 320 107 401 315 989 679 276 745 622 759 548 343 657 84 155 617 564 576 900 187 515 718 135 575 173 947 501 908 377 920 708 591 975 357 297 236 566 477 530 271 334 426 42 762 827 961 635 465 195 990 115 10 294 712 354 450 210 563 162 361 49 751 590 281 494 555 671 777 806 344 337 602 888 494 315 548 342 509 445 92 863 718 30 807 361 810 814 149 961 407 46 543 646 208 823 888 178 904 48 530 194 55 357 102 74 448 44 570 273 960 141 602 711 933 909 866 64 526 458 909 316 981 5 773 77 224 906 776 790 172 648 940 74 560 366 575 190 682 116 548 175 155 8 278 14 355 327 768 539 572 792 210 518 942 417 494 709 543 265 367 206 515 628 139 326 72 819 578 270 666 459 618 810 105 926 441 972 533 644 43 270 584 952 987 139 575 96 924 489 64 540 495 900 678 787 20 450 617 267 592 673 4 640 303 162 927 1 516 754 864 233 434 367 426 129 478 252 970 654 677 105 251 235 364 786 183 488 494 532 576 544 297 232 832 633 992 6 621 954 23 80 509 730 737 340 201 744 486 662 633 829 864 998 60 680 486 209 118 794 994 959 588 662 163 613 136 425 560 947 100 697 64 134 939 755 511 737 916 97 202 420 643 932 424 582 441 101 639 827 502 289 401 561 351 431 423 992 114 971 572 164 1 895 155 334 177 600 385 578 245 294 733 596 672 965 174 954 392 90 562 504 204 40 845 808 44 167 248 955 864 27 542 452 558 462 169 84 779 502 5 209 554 219 112 991 886 747 838 960 26 452 909 525 878 705 471 593 461 637 997 405 224 544 999 452 691 718 543 463 234 699 22 219 320 228 209 788 825 773 512 110 176 567 528 31 947 139 819 346 310 568 383 681 661 247 374 836 850 707 562 650 414 474 747 124 949 206 322 176 977 31 177 245 999 860 958 21 497 528 881 139 191 875 765 851 365 460 839 440 360 453 816 12 393 927 56 290 632 556 81 410 93 120 293 987 557 723 81 209 460 544 221 446 140 371 977 450 396 357 155 191 704 319 434 442 841 481 436 737 546 602 40 548 540 577 73 184 823 626 391 178 796 43 14 712 228 754 711 916 647 200 9 835 551 977 472 979 799 162 639 603 297 444 52 25 455 200 425 651 148 662 948 644 536 130 369 847 320 44 963 235 437 685 958 16 812 738 191 216 747 88 317 230 783 831 958 905 81 136 899 791 160 157 286 186 20 658 109 408 83 182 951 797 424 400 733 811 89 162 897 584 643 141 541 151 691 407 587 908 606 647 386 340 984 607 194 817 524 264 574 309 277 77 690 543 477 113 758 132 653 265 705 73 255 728 668 895 20 746 566 401 255 994 400 769 456 5 215 502 187 83 246 645 874 675 691 674 455 712 983 626 258 734 444 303 117 457 556 437 256 758 255 988 631 293 895 527 884 305 911 983 542 448 62 473 98 434 335 421 236 489 780 846 65 700 448 943 877 522 846 407 400 875 785 203 168 85 639 346 526 111 584 1 896 589 570 430 283 644 955 277 139 649 393 285 700 38 892 10 234 918 395 214 798 329 284 360 549 357 431 578 638 149 640 760 43 484 200 650 561 953 34 69 935 302 44 305 768 336 846 1000 651 806 86 215 653 396 406 160 785 395 100 945 117 324 912 963 746 784 746 151 78 184 331 241 860 799 14 943 160 293 461 629 464 635 496 77 734 96 669 13 677 173 2 246 90 224 641 216 561 61 735 215 480 826 776 331 987 497 442 341 683 806 383 895 541 395 210 934 320 986 826 154 233 12 325 356 949 509 799 684 203 639 527 645 50 253 305 330 883 900 199 361 206 815 569 617 253 765 388 532 811 831 510 582 61 785 439 486 3 584 779 44 386 371 274 778 917 617 767 919 557 187 603 688 150 339 687 393 269 726 628 862 696 421 695 151 879 629 371 657 851

after QuickSort  : 1 1 1 1 1 2 3 3 4 5 5 5 6 6 8 9 9 10 10 12 12 13 14 14 14 16 20 20 20 21 22 23 25 26 27 30 30 31 31 31 34 38 40 40 42 43 43 43 44 44 44 44 44 45 46 48 49 50 52 55 56 60 60 61 61 62 64 64 64 65 65 66 68 69 72 73 73 74 74 75 77 77 77 78 80 81 81 81 81 83 83 84 84 85 86 88 89 90 90 92 93 94 96 96 97 98 100 100 101 102 104 105 105 107 107 109 110 111 112 113 114 115 116 117 117 118 120 124 129 130 130 132 134 135 136 136 139 139 139 139 139 140 141 141 142 148 148 149 149 150 151 151 151 152 154 155 155 155 155 157 160 160 160 160 162 162 162 162 163 164 166 167 168 169 172 173 173 174 175 176 176 177 177 178 178 182 183 183 184 184 186 187 187 187 190 191 191 191 194 194 195 196 199 200 200 200 201 202 203 203 204 206 206 206 208 209 209 209 209 210 210 210 213 213 214 215 215 215 216 216 216 217 219 219 221 224 224 224 226 228 228 230 232 233 233 234 234 235 235 236 236 236 237 241 245 245 245 246 246 247 248 251 252 253 253 255 255 255 256 258 262 264 264 265 265 267 269 270 270 271 273 274 275 276 277 277 278 281 283 284 285 286 289 290 293 293 293 294 294 296 297 297 297 298 299 301 302 303 303 305 305 305 309 310 311 315 315 315 316 317 319 320 320 320 320 322 322 324 325 326 327 329 330 331 331 334 334 335 335 335 336 337 339 340 340 341 342 343 344 346 346 351 351 354 355 356 357 357 357 357 360 360 361 361 361 364 365 365 366 367 367 369 369 369 371 371 371 374 377 380 383 383 385 386 386 388 391 391 392 393 393 393 395 395 395 396 396 400 400 400 401 401 401 405 406 407 407 407 408 410 413 414 417 418 420 421 421 423 424 424 425 425 426 426 429 430 431 431 433 434 434 434 435 436 437 437 439 440 441 441 441 442 442 444 444 445 446 448 448 448 450 450 450 452 452 452 453 455 455 456 457 458 459 460 460 461 461 462 462 462 463 464 465 469 471 472 473 474 475 477 477 478 478 480 481 484 485 486 486 486 488 488 489 489 489 494 494 494 494 495 495 496 497 497 501 502 502 502 502 504 506 506 509 509 509 510 511 512 515 515 515 516 518 522 523 524 524 525 526 526 527 527 528 528 530 530 532 532 533 533 536 538 539 539 540 540 541 541 542 542 543 543 543 543 544 544 544 546 548 548 548 548 549 551 551 554 555 555 556 556 557 557 558 560 560 560 561 561 561 562 562 563 564 566 566 566 567 568 569 570 570 572 572 574 575 575 575 576 576 577 577 578 578 578 582 582 582 584 584 584 584 587 588 589 590 591 592 593 596 599 600 602 602 602 603 603 605 606 607 608 613 614 617 617 617 617 618 621 622 626 626 628 628 629 629 629 631 631 632 633 633 635 635 637 638 639 639 639 639 640 640 641 643 643 644 644 644 645 645 646 647 647 648 649 649 650 650 651 651 651 653 653 654 657 657 658 661 662 662 662 666 668 669 671 672 673 673 674 675 677 677 678 679 679 679 680 680 681 682 683 684 685 686 687 687 688 688 690 690 691 691 691 695 695 696 697 697 699 700 700 704 705 705 707 708 709 711 711 712 712 712 714 718 718 718 723 726 728 730 730 733 733 734 734 735 737 737 737 738 740 744 745 746 746 746 747 747 747 751 754 754 754 755 758 758 759 760 762 764 765 765 767 768 768 769 773 773 776 776 777 778 779 779 780 783 783 784 785 785 785 785 786 787 788 789 790 791 792 793 794 796 797 798 799 799 799 799 800 801 804 806 806 806 807 808 810 810 811 811 812 814 815 816 817 819 819 819 823 823 825 826 826 827 827 828 829 830 831 831 832 835 836 838 838 839 841 841 845 846 846 846 846 847 850 851 851 853 860 860 862 863 864 864 864 866 872 874 875 875 877 878 879 879 881 883 884 886 888 888 892 893 895 895 895 895 896 897 899 900 900 900 903 904 904 905 906 908 908 909 909 909 909 911 912 916 916 917 918 919 920 924 926 927 927 929 929 932 932 933 933 934 934 935 939 940 942 943 943 945 947 947 947 947 948 949 949 951 952 953 953 954 954 955 955 957 958 958 958 959 960 960 961 961 963 963 965 970 971 972 972 975 977 977 977 978 979 981 983 983 983 984 986 987 987 987 988 988 989 990 991 992 992 994 994 997 997 998 999 999 1000
Time spent Quicksorting : 0.000

after bubbleSort  : 1 1 1 1 1 2 3 3 4 5 5 5 6 6 8 9 9 10 10 12 12 13 14 14 14 16 20 20 20 21 22 23 25 26 27 30 30 31 31 31 34 38 40 40 42 43 43 43 44 44 44 44 44 45 46 48 49 50 52 55 56 60 60 61 61 62 64 64 64 65 65 66 68 69 72 73 73 74 74 75 77 77 77 78 80 81 81 81 81 83 83 84 84 85 86 88 89 90 90 92 93 94 96 96 97 98 100 100 101 102 104 105 105 107 107 109 110 111 112 113 114 115 116 117 117 118 120 124 129 130 130 132 134 135 136 136 139 139 139 139 139 140 141 141 142 148 148 149 149 150 151 151 151 152 154 155 155 155 155 157 160 160 160 160 162 162 162 162 163 164 166 167 168 169 172 173 173 174 175 176 176 177 177 178 178 182 183 183 184 184 186 187 187 187 190 191 191 191 194 194 195 196 199 200 200 200 201 202 203 203 204 206 206 206 208 209 209 209 209 210 210 210 213 213 214 215 215 215 216 216 216 217 219 219 221 224 224 224 226 228 228 230 232 233 233 234 234 235 235 236 236 236 237 241 245 245 245 246 246 247 248 251 252 253 253 255 255 255 256 258 262 264 264 265 265 267 269 270 270 271 273 274 275 276 277 277 278 281 283 284 285 286 289 290 293 293 293 294 294 296 297 297 297 298 299 301 302 303 303 305 305 305 309 310 311 315 315 315 316 317 319 320 320 320 320 322 322 324 325 326 327 329 330 331 331 334 334 335 335 335 336 337 339 340 340 341 342 343 344 346 346 351 351 354 355 356 357 357 357 357 360 360 361 361 361 364 365 365 366 367 367 369 369 369 371 371 371 374 377 380 383 383 385 386 386 388 391 391 392 393 393 393 395 395 395 396 396 400 400 400 401 401 401 405 406 407 407 407 408 410 413 414 417 418 420 421 421 423 424 424 425 425 426 426 429 430 431 431 433 434 434 434 435 436 437 437 439 440 441 441 441 442 442 444 444 445 446 448 448 448 450 450 450 452 452 452 453 455 455 456 457 458 459 460 460 461 461 462 462 462 463 464 465 469 471 472 473 474 475 477 477 478 478 480 481 484 485 486 486 486 488 488 489 489 489 494 494 494 494 495 495 496 497 497 501 502 502 502 502 504 506 506 509 509 509 510 511 512 515 515 515 516 518 522 523 524 524 525 526 526 527 527 528 528 530 530 532 532 533 533 536 538 539 539 540 540 541 541 542 542 543 543 543 543 544 544 544 546 548 548 548 548 549 551 551 554 555 555 556 556 557 557 558 560 560 560 561 561 561 562 562 563 564 566 566 566 567 568 569 570 570 572 572 574 575 575 575 576 576 577 577 578 578 578 582 582 582 584 584 584 584 587 588 589 590 591 592 593 596 599 600 602 602 602 603 603 605 606 607 608 613 614 617 617 617 617 618 621 622 626 626 628 628 629 629 629 631 631 632 633 633 635 635 637 638 639 639 639 639 640 640 641 643 643 644 644 644 645 645 646 647 647 648 649 649 650 650 651 651 651 653 653 654 657 657 658 661 662 662 662 666 668 669 671 672 673 673 674 675 677 677 678 679 679 679 680 680 681 682 683 684 685 686 687 687 688 688 690 690 691 691 691 695 695 696 697 697 699 700 700 704 705 705 707 708 709 711 711 712 712 712 714 718 718 718 723 726 728 730 730 733 733 734 734 735 737 737 737 738 740 744 745 746 746 746 747 747 747 751 754 754 754 755 758 758 759 760 762 764 765 765 767 768 768 769 773 773 776 776 777 778 779 779 780 783 783 784 785 785 785 785 786 787 788 789 790 791 792 793 794 796 797 798 799 799 799 799 800 801 804 806 806 806 807 808 810 810 811 811 812 814 815 816 817 819 819 819 823 823 825 826 826 827 827 828 829 830 831 831 832 835 836 838 838 839 841 841 845 846 846 846 846 847 850 851 851 853 860 860 862 863 864 864 864 866 872 874 875 875 877 878 879 879 881 883 884 886 888 888 892 893 895 895 895 895 896 897 899 900 900 900 903 904 904 905 906 908 908 909 909 909 909 911 912 916 916 917 918 919 920 924 926 927 927 929 929 932 932 933 933 934 934 935 939 940 942 943 943 945 947 947 947 947 948 949 949 951 952 953 953 954 954 955 955 957 958 958 958 959 960 960 961 961 963 963 965 970 971 972 972 975 977 977 977 978 979 981 983 983 983 984 986 987 987 987 988 988 989 990 991 992 992 994 994 997 997 998 999 999 1000
Time spent Bubblesorting : 0.003

after SelectionSort  : 1 1 1 1 1 2 3 3 4 5 5 5 6 6 8 9 9 10 10 12 12 13 14 14 14 16 20 20 20 21 22 23 25 26 27 30 30 31 31 31 34 38 40 40 42 43 43 43 44 44 44 44 44 45 46 48 49 50 52 55 56 60 60 61 61 62 64 64 64 65 65 66 68 69 72 73 73 74 74 75 77 77 77 78 80 81 81 81 81 83 83 84 84 85 86 88 89 90 90 92 93 94 96 96 97 98 100 100 101 102 104 105 105 107 107 109 110 111 112 113 114 115 116 117 117 118 120 124 129 130 130 132 134 135 136 136 139 139 139 139 139 140 141 141 142 148 148 149 149 150 151 151 151 152 154 155 155 155 155 157 160 160 160 160 162 162 162 162 163 164 166 167 168 169 172 173 173 174 175 176 176 177 177 178 178 182 183 183 184 184 186 187 187 187 190 191 191 191 194 194 195 196 199 200 200 200 201 202 203 203 204 206 206 206 208 209 209 209 209 210 210 210 213 213 214 215 215 215 216 216 216 217 219 219 221 224 224 224 226 228 228 230 232 233 233 234 234 235 235 236 236 236 237 241 245 245 245 246 246 247 248 251 252 253 253 255 255 255 256 258 262 264 264 265 265 267 269 270 270 271 273 274 275 276 277 277 278 281 283 284 285 286 289 290 293 293 293 294 294 296 297 297 297 298 299 301 302 303 303 305 305 305 309 310 311 315 315 315 316 317 319 320 320 320 320 322 322 324 325 326 327 329 330 331 331 334 334 335 335 335 336 337 339 340 340 341 342 343 344 346 346 351 351 354 355 356 357 357 357 357 360 360 361 361 361 364 365 365 366 367 367 369 369 369 371 371 371 374 377 380 383 383 385 386 386 388 391 391 392 393 393 393 395 395 395 396 396 400 400 400 401 401 401 405 406 407 407 407 408 410 413 414 417 418 420 421 421 423 424 424 425 425 426 426 429 430 431 431 433 434 434 434 435 436 437 437 439 440 441 441 441 442 442 444 444 445 446 448 448 448 450 450 450 452 452 452 453 455 455 456 457 458 459 460 460 461 461 462 462 462 463 464 465 469 471 472 473 474 475 477 477 478 478 480 481 484 485 486 486 486 488 488 489 489 489 494 494 494 494 495 495 496 497 497 501 502 502 502 502 504 506 506 509 509 509 510 511 512 515 515 515 516 518 522 523 524 524 525 526 526 527 527 528 528 530 530 532 532 533 533 536 538 539 539 540 540 541 541 542 542 543 543 543 543 544 544 544 546 548 548 548 548 549 551 551 554 555 555 556 556 557 557 558 560 560 560 561 561 561 562 562 563 564 566 566 566 567 568 569 570 570 572 572 574 575 575 575 576 576 577 577 578 578 578 582 582 582 584 584 584 584 587 588 589 590 591 592 593 596 599 600 602 602 602 603 603 605 606 607 608 613 614 617 617 617 617 618 621 622 626 626 628 628 629 629 629 631 631 632 633 633 635 635 637 638 639 639 639 639 640 640 641 643 643 644 644 644 645 645 646 647 647 648 649 649 650 650 651 651 651 653 653 654 657 657 658 661 662 662 662 666 668 669 671 672 673 673 674 675 677 677 678 679 679 679 680 680 681 682 683 684 685 686 687 687 688 688 690 690 691 691 691 695 695 696 697 697 699 700 700 704 705 705 707 708 709 711 711 712 712 712 714 718 718 718 723 726 728 730 730 733 733 734 734 735 737 737 737 738 740 744 745 746 746 746 747 747 747 751 754 754 754 755 758 758 759 760 762 764 765 765 767 768 768 769 773 773 776 776 777 778 779 779 780 783 783 784 785 785 785 785 786 787 788 789 790 791 792 793 794 796 797 798 799 799 799 799 800 801 804 806 806 806 807 808 810 810 811 811 812 814 815 816 817 819 819 819 823 823 825 826 826 827 827 828 829 830 831 831 832 835 836 838 838 839 841 841 845 846 846 846 846 847 850 851 851 853 860 860 862 863 864 864 864 866 872 874 875 875 877 878 879 879 881 883 884 886 888 888 892 893 895 895 895 895 896 897 899 900 900 900 903 904 904 905 906 908 908 909 909 909 909 911 912 916 916 917 918 919 920 924 926 927 927 929 929 932 932 933 933 934 934 935 939 940 942 943 943 945 947 947 947 947 948 949 949 951 952 953 953 954 954 955 955 957 958 958 958 959 960 960 961 961 963 963 965 970 971 972 972 975 977 977 977 978 979 981 983 983 983 984 986 987 987 987 988 988 989 990 991 992 992 994 994 997 997 998 999 999 1000
Time spent Selectionsorting : 0.002

after insertionSort  : 1 1 1 1 1 2 3 3 4 5 5 5 6 6 8 9 9 10 10 12 12 13 14 14 14 16 20 20 20 21 22 23 25 26 27 30 30 31 31 31 34 38 40 40 42 43 43 43 44 44 44 44 44 45 46 48 49 50 52 55 56 60 60 61 61 62 64 64 64 65 65 66 68 69 72 73 73 74 74 75 77 77 77 78 80 81 81 81 81 83 83 84 84 85 86 88 89 90 90 92 93 94 96 96 97 98 100 100 101 102 104 105 105 107 107 109 110 111 112 113 114 115 116 117 117 118 120 124 129 130 130 132 134 135 136 136 139 139 139 139 139 140 141 141 142 148 148 149 149 150 151 151 151 152 154 155 155 155 155 157 160 160 160 160 162 162 162 162 163 164 166 167 168 169 172 173 173 174 175 176 176 177 177 178 178 182 183 183 184 184 186 187 187 187 190 191 191 191 194 194 195 196 199 200 200 200 201 202 203 203 204 206 206 206 208 209 209 209 209 210 210 210 213 213 214 215 215 215 216 216 216 217 219 219 221 224 224 224 226 228 228 230 232 233 233 234 234 235 235 236 236 236 237 241 245 245 245 246 246 247 248 251 252 253 253 255 255 255 256 258 262 264 264 265 265 267 269 270 270 271 273 274 275 276 277 277 278 281 283 284 285 286 289 290 293 293 293 294 294 296 297 297 297 298 299 301 302 303 303 305 305 305 309 310 311 315 315 315 316 317 319 320 320 320 320 322 322 324 325 326 327 329 330 331 331 334 334 335 335 335 336 337 339 340 340 341 342 343 344 346 346 351 351 354 355 356 357 357 357 357 360 360 361 361 361 364 365 365 366 367 367 369 369 369 371 371 371 374 377 380 383 383 385 386 386 388 391 391 392 393 393 393 395 395 395 396 396 400 400 400 401 401 401 405 406 407 407 407 408 410 413 414 417 418 420 421 421 423 424 424 425 425 426 426 429 430 431 431 433 434 434 434 435 436 437 437 439 440 441 441 441 442 442 444 444 445 446 448 448 448 450 450 450 452 452 452 453 455 455 456 457 458 459 460 460 461 461 462 462 462 463 464 465 469 471 472 473 474 475 477 477 478 478 480 481 484 485 486 486 486 488 488 489 489 489 494 494 494 494 495 495 496 497 497 501 502 502 502 502 504 506 506 509 509 509 510 511 512 515 515 515 516 518 522 523 524 524 525 526 526 527 527 528 528 530 530 532 532 533 533 536 538 539 539 540 540 541 541 542 542 543 543 543 543 544 544 544 546 548 548 548 548 549 551 551 554 555 555 556 556 557 557 558 560 560 560 561 561 561 562 562 563 564 566 566 566 567 568 569 570 570 572 572 574 575 575 575 576 576 577 577 578 578 578 582 582 582 584 584 584 584 587 588 589 590 591 592 593 596 599 600 602 602 602 603 603 605 606 607 608 613 614 617 617 617 617 618 621 622 626 626 628 628 629 629 629 631 631 632 633 633 635 635 637 638 639 639 639 639 640 640 641 643 643 644 644 644 645 645 646 647 647 648 649 649 650 650 651 651 651 653 653 654 657 657 658 661 662 662 662 666 668 669 671 672 673 673 674 675 677 677 678 679 679 679 680 680 681 682 683 684 685 686 687 687 688 688 690 690 691 691 691 695 695 696 697 697 699 700 700 704 705 705 707 708 709 711 711 712 712 712 714 718 718 718 723 726 728 730 730 733 733 734 734 735 737 737 737 738 740 744 745 746 746 746 747 747 747 751 754 754 754 755 758 758 759 760 762 764 765 765 767 768 768 769 773 773 776 776 777 778 779 779 780 783 783 784 785 785 785 785 786 787 788 789 790 791 792 793 794 796 797 798 799 799 799 799 800 801 804 806 806 806 807 808 810 810 811 811 812 814 815 816 817 819 819 819 823 823 825 826 826 827 827 828 829 830 831 831 832 835 836 838 838 839 841 841 845 846 846 846 846 847 850 851 851 853 860 860 862 863 864 864 864 866 872 874 875 875 877 878 879 879 881 883 884 886 888 888 892 893 895 895 895 895 896 897 899 900 900 900 903 904 904 905 906 908 908 909 909 909 909 911 912 916 916 917 918 919 920 924 926 927 927 929 929 932 932 933 933 934 934 935 939 940 942 943 943 945 947 947 947 947 948 949 949 951 952 953 953 954 954 955 955 957 958 958 958 959 960 960 961 961 963 963 965 970 971 972 972 975 977 977 977 978 979 981 983 983 983 984 986 987 987 987 988 988 989 990 991 992 992 994 994 997 997 998 999 999 1000
Time spent Insertionsorting : 0.005

after mergeSort  : 1 1 1 1 1 2 3 3 4 5 5 5 6 6 8 9 9 10 10 12 12 13 14 14 14 16 20 20 20 21 22 23 25 26 27 30 30 31 31 31 34 38 40 40 42 43 43 43 44 44 44 44 44 45 46 48 49 50 52 55 56 60 60 61 61 62 64 64 64 65 65 66 68 69 72 73 73 74 74 75 77 77 77 78 80 81 81 81 81 83 83 84 84 85 86 88 89 90 90 92 93 94 96 96 97 98 100 100 101 102 104 105 105 107 107 109 110 111 112 113 114 115 116 117 117 118 120 124 129 130 130 132 134 135 136 136 139 139 139 139 139 140 141 141 142 148 148 149 149 150 151 151 151 152 154 155 155 155 155 157 160 160 160 160 162 162 162 162 163 164 166 167 168 169 172 173 173 174 175 176 176 177 177 178 178 182 183 183 184 184 186 187 187 187 190 191 191 191 194 194 195 196 199 200 200 200 201 202 203 203 204 206 206 206 208 209 209 209 209 210 210 210 213 213 214 215 215 215 216 216 216 217 219 219 221 224 224 224 226 228 228 230 232 233 233 234 234 235 235 236 236 236 237 241 245 245 245 246 246 247 248 251 252 253 253 255 255 255 256 258 262 264 264 265 265 267 269 270 270 271 273 274 275 276 277 277 278 281 283 284 285 286 289 290 293 293 293 294 294 296 297 297 297 298 299 301 302 303 303 305 305 305 309 310 311 315 315 315 316 317 319 320 320 320 320 322 322 324 325 326 327 329 330 331 331 334 334 335 335 335 336 337 339 340 340 341 342 343 344 346 346 351 351 354 355 356 357 357 357 357 360 360 361 361 361 364 365 365 366 367 367 369 369 369 371 371 371 374 377 380 383 383 385 386 386 388 391 391 392 393 393 393 395 395 395 396 396 400 400 400 401 401 401 405 406 407 407 407 408 410 413 414 417 418 420 421 421 423 424 424 425 425 426 426 429 430 431 431 433 434 434 434 435 436 437 437 439 440 441 441 441 442 442 444 444 445 446 448 448 448 450 450 450 452 452 452 453 455 455 456 457 458 459 460 460 461 461 462 462 462 463 464 465 469 471 472 473 474 475 477 477 478 478 480 481 484 485 486 486 486 488 488 489 489 489 494 494 494 494 495 495 496 497 497 501 502 502 502 502 504 506 506 509 509 509 510 511 512 515 515 515 516 518 522 523 524 524 525 526 526 527 527 528 528 530 530 532 532 533 533 536 538 539 539 540 540 541 541 542 542 543 543 543 543 544 544 544 546 548 548 548 548 549 551 551 554 555 555 556 556 557 557 558 560 560 560 561 561 561 562 562 563 564 566 566 566 567 568 569 570 570 572 572 574 575 575 575 576 576 577 577 578 578 578 582 582 582 584 584 584 584 587 588 589 590 591 592 593 596 599 600 602 602 602 603 603 605 606 607 608 613 614 617 617 617 617 618 621 622 626 626 628 628 629 629 629 631 631 632 633 633 635 635 637 638 639 639 639 639 640 640 641 643 643 644 644 644 645 645 646 647 647 648 649 649 650 650 651 651 651 653 653 654 657 657 658 661 662 662 662 666 668 669 671 672 673 673 674 675 677 677 678 679 679 679 680 680 681 682 683 684 685 686 687 687 688 688 690 690 691 691 691 695 695 696 697 697 699 700 700 704 705 705 707 708 709 711 711 712 712 712 714 718 718 718 723 726 728 730 730 733 733 734 734 735 737 737 737 738 740 744 745 746 746 746 747 747 747 751 754 754 754 755 758 758 759 760 762 764 765 765 767 768 768 769 773 773 776 776 777 778 779 779 780 783 783 784 785 785 785 785 786 787 788 789 790 791 792 793 794 796 797 798 799 799 799 799 800 801 804 806 806 806 807 808 810 810 811 811 812 814 815 816 817 819 819 819 823 823 825 826 826 827 827 828 829 830 831 831 832 835 836 838 838 839 841 841 845 846 846 846 846 847 850 851 851 853 860 860 862 863 864 864 864 866 872 874 875 875 877 878 879 879 881 883 884 886 888 888 892 893 895 895 895 895 896 897 899 900 900 900 903 904 904 905 906 908 908 909 909 909 909 911 912 916 916 917 918 919 920 924 926 927 927 929 929 932 932 933 933 934 934 935 939 940 942 943 943 945 947 947 947 947 948 949 949 951 952 953 953 954 954 955 955 957 958 958 958 959 960 960 961 961 963 963 965 970 971 972 972 975 977 977 977 978 979 981 983 983 983 984 986 987 987 987 988 988 989 990 991 992 992 994 994 997 997 998 999 999 1000
Time spent Mergesorting : 0.000
