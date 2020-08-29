void sorting(int x[])
    {
        for(int k=0;k < size-1; k++)
        {
            for(int j=0; j< size-k-1;j++)
            {
                
                if(x[j]>x[j+1])
                {
                    int temp = x[j];
                    x[j]=x[j+1];
                    x[j+1]=temp;
                }
            }
        }
        
    }
    
    void mean( int x[])
    {
        int sum =0;
        for(int i=0;i<size;i++)
        {
            sum = sum+x[i];
        }
        int avg = sum/size ;
        printf("mean: %d",avg);
        
    }

    void mode( int x[] )
    {   
        int maxcount =0;
        int maxvalue =0;
        for(int i=0;i<size;i++)
        {
            int count =0;
            for(int j=0 ; j<size; j++)
            {
                if(x[j]==x[i])
                {   
                    count ++ ;
                }
            }
            if(count > maxcount)
            {
                maxcount =count;
                maxvalue = x[i];
            }

        }
        printf("mode: %d", maxvalue);
    }
    
    void median(int x[])
    {   
        int num;
        sorting( x );
        if(size %2!=0)
        {
            int num = ((size+1)/2)-1 ;
            printf("median: %d",x[num]);
        }
        else
        {
            int num = (size)/2;
            int avg1 = (x[num] + x[num-1])/2 ;
             printf("median: %d",avg1);
        }    

        
    }
