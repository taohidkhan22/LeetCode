 int h1[256]={0},h2[256]={0};
          for(int i=0;i<s1.size();i++){
            if(h1[s1[i]]!=h2[s2[i]]) return false;
            h1[s1[i]]=i+1;
            h1[s2[i]]=i+1;
            
          }
          return true;