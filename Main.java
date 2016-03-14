import java.io.UnsupportedEncodingException;
import java.io.FileNotFoundException;

public class Main{
    public static void main(String[] args) throws UnsupportedEncodingException, FileNotFoundException {
        int x = 1;
        if(!(args.length == 3)){
            System.out.println("ERROR: Invalid arguments. Expected [data] [filename] [file extention]");
        }
        else{
            try{
                WriteFile write;
                write = new WriteFile(args[0], args[1], args[2]);
                if(x == 1)
                    throw new UnsupportedEncodingException(); //fix this
                else
                    throw new FileNotFoundException();
            }
            catch(UnsupportedEncodingException uee){
                
            }
            catch(FileNotFoundException ex){
                
            }

        }
    }
}
