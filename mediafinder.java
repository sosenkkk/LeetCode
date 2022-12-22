import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

class MedianFinder {
    List<Integer> ob;
    public MedianFinder() {
        ob= new ArrayList<Integer>();
    }
    
    public void addNum(int num) {
        int len= ob.size();
        if(len > 0){
            int mid=0;
            for (mid = 0; mid < len; mid++){
                if(ob.get(mid)>=num){
                    break;
                }
            }
            ob.add(mid , num);
        }
        else{
            ob.add(num);
        }
        for(int i=0; i<len; i++){
            System.out.println(ob.get(i));
        }
        
    } 
    public double findMedian() {
        int len= ob.size();
        double median;
        if(len%2==0){
            median=(ob.get(len/2)+ob.get(len/2 -1))/2.0;
        }
        else{
            
            median= ob.get((len/2));
        }
        return median;
    }
}

public class mediafinder{
    public static void main(String[] args) throws IOException {
        MedianFinder obj= new MedianFinder();
        obj.addNum(5);
        obj.addNum(6);
        obj.addNum(7);
        obj.addNum(9);
        obj.addNum(10);
        System.out.println( obj.findMedian());

    }
}