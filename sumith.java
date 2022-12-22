import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
 
 
public class sumith {
    public static void main(String[] args) throws IOException {
 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int arr[]= new int[n];
        int pos=0;
        int pos2=0;
        int min=Integer.parseInt(br.readLine());
        arr[0]=min;
        for(int i=1; i<n; i++){
            arr[i]= Integer.parseInt(br.readLine());
            if(arr[i]<min){
                min=arr[i];
                pos=i;
            }
            else if(arr[i]==min){
                pos2=i;
            }
           
        }
        int out;
        int c= arr[(pos+1)%n];
        if(arr[pos]==arr[pos2]){
            if(pos<pos2){
                out=min*n+(pos2-pos-1);
            }
            else
                out=min*n+ (n-pos-1 + pos2);
        }
        else
            out= min*n+ n-1;
        System.out.println(out);
}
}