import java.io.*;

public class WriteFile{
    public WriteFile(String data, String filename, String extention) throws FileNotFoundException, UnsupportedEncodingException{
        try{
            File output = new File(filename + "." + extention);
            PrintWriter wr = new PrintWriter(output, "UTF-8");
            System.out.println("File " + filename + "." + extention + " created!");

            wr.println(data);
            
            if(!(output.exists())){
                throw new FileNotFoundException();
            }
            
        }
        catch(FileNotFoundException ex){
            //what is this even????
        }
        catch(UnsupportedEncodingException e){
            throw new RuntimeException(e);
        }

    }

    /*public WriteFile(String[] data, String filename, String extention){
        
    }*/
}
