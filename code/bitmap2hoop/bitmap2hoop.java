import java.awt.*;
import java.awt.*;
import java.awt.image.*;
import java.io.*;
import javax.imageio.*;
import javax.swing.*;
import java.util.Collection;
class bitmap2hoop {
public static void main(String[] args) throws Exception{
  System.out.println("#define NUMBER_OF_PATTERNS " + args.length);
  for (String s : args ) {
      outputImage(s);
    }  
}

public static void outputImage(String path) throws Exception{
  File imageFile = new File(path);
  BufferedImage image = ImageIO.read(imageFile);
  String data[] = new String[image.getWidth()];
  for (int x = 0; x < image.getWidth() ; x++ ) {
    Integer row[] = new Integer[image.getHeight()];
    for (int y = 0; y < image.getHeight() ; y++ ) {
      int pixel[] = new int[3];
      int color = image.getRGB(x,y);
      pixel[0] = ((color >>16) &0xff)>>6;
      pixel[1] = ((color >>8) &0xff)>>6;
      pixel[2] = ((color) &0xff)>>6;
      color = 0;
      color += pixel[0];
      color = color << 2;
      color += pixel[1];
      color = color << 2;
      color += pixel[2];
      // System.out.println(x+","+y+":");
      row[y] = new Integer(color);
    }
    data[x] = "{"+join(row,", ")+"}";
  }
  System.out.print("int " + imageFile.getName().replace(".", "_"));
  System.out.print("["+ image.getHeight()+"]");
  System.out.println("[" + image.getWidth()+"] = {");
  System.out.println(join(data, ", \n")+"\n};");
}

public static String join(Object[] pixels, String delimiter) {
    StringBuffer buffer = new StringBuffer();
    {
      for (int i = 0;i < pixels.length ; i++ ) {
        buffer.append(padLeft(pixels[i],2));
        if (i < pixels.length - 1) {
          buffer.append(delimiter);
        }
      }
    }
    return buffer.toString();
}

public static String padLeft(Object s, int n) {
    return String.format("%1$" + n + "s", s.toString());  
}

}
