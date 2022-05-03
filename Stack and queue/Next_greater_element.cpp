/* question link --https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1#*/
 
 vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long >vc(n);
        stack<long long>st;
        st.push(0);
        for(int i=1;i<n;i++)
        {
            int z=arr[st.top()];
            if(arr[i]<z)
            {
                st.push(i);
            }
            else
            {
                while(st.size()>0 and arr[st.top()]<arr[i])
                {
                    vc[st.top()]=(arr[i]);
                    st.pop();
                }
                st.push(i);
            }
        }
        while(st.size()>0)
        {
            vc[st.top()]=-1;
            st.pop();
        }
        return vc;
        // Your code here
    }