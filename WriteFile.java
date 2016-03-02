import java.io.*;

public class WriteFile{
    public WriteFile(String data, String filename, String extention) throws FileNotFoundException, UnsupportedEncodingException{
        try{
            File output = new File(filename + "." + extention);
            PrintWriter wr = new PrintWriter(output, "ascii");
            System.out.println("File " + filename + "." + extention + " created!");

            wr.println(data);
            
            if(!(output.exists())){
                throw new FileNotFoundException();
            }

            wr.close();
            
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
