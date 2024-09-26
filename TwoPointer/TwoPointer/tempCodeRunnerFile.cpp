for(int i=0;i<s1.size();i++)
    {
        for(j=k;j<s2.size();j++)
        {
            if(s1[i]==s2[j])
            {
                v1.push_back(string(1,s1[i]));
                k=k+1;
                break;