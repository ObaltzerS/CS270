#include <iostream>

using namespace std;

int main(){
    int sortdata[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n = sizeof(sortdata) / sizeof(int);
    //calculate the size of list
    int temp, i, j, comps = 0, swaps = 0;
    for (int k = 0; k < n; k++){
        //output list before sort
        cout << sortdata[k] << ",";
    }
    cout << "\n" << "^ the list before sorting" << "\n";
    cout << "size of list is " << n << " elements" << "\n";
    for (i = 0; i < n-1; i++){
        //repeat comparisons
        for (j = 0; j < n-i-1; j++){
            //iterate through list, minus the elements which are sorted
            comps++;
            if(sortdata[j] > sortdata[j+1]){
                swaps++;
                //swap elements of list if the next element is larger
                temp = sortdata[j+1]; 
                sortdata[j+1] =  sortdata[j];
                sortdata[j] = temp;
            }
        }
        for (int k = 0; k < n; k++){
        //output the list after each comparison is finished. 
        cout << sortdata[k] << ",";
    }
        cout << "\n";
    }
    //output info after sorting complete
    cout << comps << " total comparisons performed" << "\n";
    cout << swaps << " total element swaps performed" << "\n";
    cout << "final sorted list: ";
    for (int k = 0; k < n; k++){
        //output list
        cout << sortdata[k] << ",";
    }
    return 0;
}