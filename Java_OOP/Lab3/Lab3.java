import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Window {
    boolean open;// провірити вікно
    float length = 8;
    float height = 7;
    int glassCount;
    String material;
    String color;

    Window() {
        open = false;
        glassCount = 3;
        color = "White";
        material = "tree";

    }

    Window(float l, float h) {
        this();
        length = l;
        height = h;
        System.out.println("Lenqth:" + length + "Height:" + height);
    }

    Window(String m) {
        System.out.println("Material:" + m);
        material = m;
    }

    void printWindow() { // метод

        System.out.println("Open window: " + open + "; Length:" + length + "; Height:" + height + "; Material:"
                + material + "; Color:" + color);
    }

    void close() {
        open = false;// об'єкт
        System.out.println("window close");
    }

    void open() {
        open = true;// об'єкт
        System.out.println("window open");
    }

    float getSquare() {
        return length * height;
    }
}

class Lab3 {
    public static void main(String[] args) {
        JButton btn = new JButton("Create");
        JFrame frame = new JFrame("First");
        JButton cl = new JButton("Close");
        JButton op = new JButton("Open");
        JButton square = new JButton("Square");
        JTextField square1 = new JTextField();
        Window w = new Window(8, 6);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().add(cl, BorderLayout.EAST);
        frame.getContentPane().add(btn, BorderLayout.WEST);
        frame.getContentPane().add(square, BorderLayout.CENTER);
        frame.getContentPane().add(op, BorderLayout.SOUTH);
        frame.setSize(250, 200);
        frame.setVisible(true);
        btn.setLocation(10, 10);
        btn.setSize(160, 50);

        cl.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                w.close();
                w.printWindow();
            }
        });

        op.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                w.open();
                w.printWindow();
            }
        });

        square.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.out.println("Square=" + w.getSquare());
            }
        });

    }
}
