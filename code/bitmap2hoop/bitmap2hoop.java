import java.awt.*;
import java.awt.*;
import java.awt.image.*;
import java.io.*;
import javax.imageio.*;
import javax.swing.*;
import java.util.Collection;
class bitmap2hoop {
public static void main(String[] args) throws Exception{
  if(args.length < 1){
    System.out.println("Please provide path to bitmap");
    System.exit(1);
  }
  String path = args[0];
  BufferedImage image = ImageIO.read(new File(path));
  String data[] = new String[18];
  for (int x = 0; x < 18 ; x++ ) {
    Integer row[] = new Integer[18];
    for (int y = 0; y < 18 ; y++ ) {
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
  System.out.println("{"+join(data, ", \n")+"};");
}

public static String join(Object[] pixels, String delimiter) {
    StringBuffer buffer = new StringBuffer();
    {
      for (int i = 0;i < pixels.length ; i++ ) {
        buffer.append(pixels[i]);
        if (i < pixels.length - 1) {
          buffer.append(delimiter);
        }
      }
    }
    return buffer.toString();
}

}
