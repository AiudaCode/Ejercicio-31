
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        // se crea un objeto de la clase Recursividad (Instanciaciación)
        Recursividad obj = new Recursividad();
        // pedimos el numero y lo capturamos en la variable num de tipo entero
        int num = Integer.parseInt(JOptionPane.showInputDialog("Digite numero: "));
        // mostramos el factorial del número llamando al metodo factorial() y le asignamos como parametro la variable "num"
        JOptionPane.showMessageDialog(null, "El factorial de " + num + " es: " + obj.factorial(num));
    }
}
