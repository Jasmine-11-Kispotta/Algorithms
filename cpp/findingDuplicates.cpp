  #include <iostream>
  # include<vector>
	
  using namespace std; 
vector<int> duplicates(int arr[], int n) 
{ 
for (int i = 0; i < n; i++) { 

        arr[i] += 1; 

    } 
vector<int> res; 

  int count = 0; 
for (int i = 0; i < n; i++) { 
 int index = abs(arr[i]) > n ? abs(arr[i]) / (n + 1) : abs(arr[i]); 
 if (index == n) { 

            count++; 
            continue; 

        } 
        int val = arr[index]; 
        if (val < 0) { 

            res.push_back(index - 1); 
            arr[index] = abs(arr[index]) * (n + 1); 

        } 
        else if (val > n) 

            continue; 

        else
arr[index] = -arr[index]; 

    } 

  if (count > 1) 

        res.push_back(n - 1); 
if (res.size() == 0) 

        res.push_back(-1); 
else

        sort(res.begin(), res.end()); 
return res; 
} 
int main() 
{ 

    int numRay[20],n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter "<<n<<" elements:";
    for(int i =0;i<n;i++)
        cin>>numRay[i];

  
vector<int> ans = duplicates(numRay, n); 
   cout<<"Duplicate elements in the array:\n";
     for (int i : ans) 
         cout << i << "\t" << endl; 
return 0;
 }




                 
  

  

