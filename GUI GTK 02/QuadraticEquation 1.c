#include <stdlib.h>
#include <gtk/gtk.h>
#include <string.h>
#include <math.h>

GtkWidget *label7;
GtkWidget *label8;
GtkWidget *label9;
GtkWidget *label10;

GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;

void button1_clicked(){
    char *num1, *num2,*num3;
    int Num1, Num2, Num3;
    float x1, x2;
    char root1[10] = "";
    char root2[10] = "";

    num1 = gtk_entry_get_text(input2);
    Num1 = atoi(num1);
    num2 = gtk_entry_get_text(input3);
    Num2 = atoi(num2);
    num3 = gtk_entry_get_text(input4);
    Num3 = atoi(num3);
    int delta;
    delta = ((Num2*Num2) - (4*Num1*Num3));
    if(delta > 0){
        gtk_label_set_text(label8, "2");
        x1 = (-Num2+sqrt(delta))/(2*Num1);
        x2 = (-Num2-sqrt(delta))/(2*Num1);
        itoa(x1,root1,10);
        itoa(x2,root2,10);
        gtk_label_set_text(label9, root1);
        gtk_label_set_text(label10, root2);
    }else if(delta == 0){
        gtk_label_set_text(label8, "1");
        x1=x2=(-Num2)/(2*Num1);
        itoa(x1,root1,10);
        itoa(x2,root2,10);
        gtk_label_set_text(label9, root1);
        gtk_label_set_text(label10, root2);
    }else{
        gtk_label_set_text(label8, "0");
        gtk_label_set_text(label9, "No root");
        gtk_label_set_text(label10, "No root");
    }

    char eq[50] = "";
    strcat(eq, num1);
    strcat(eq, "X^2");
    strcat(eq," + ");
    strcat(eq, num2);
    strcat(eq, "X + ");
    strcat(eq, num3);
    strcat(eq, " = 0");
    gtk_label_set_text(label7, eq);
}
void button2_clicked(){
    gtk_entry_set_text(input2, "0");
    gtk_entry_set_text(input3, "0");
    gtk_entry_set_text(input4, "0");
}
void button3_clicked(){
    gtk_main_quit();
}
int main (int argc, char *argv[])
{


  /* Initialize GTK+ */
  g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, (GLogFunc) gtk_false, NULL);
  gtk_init (&argc, &argv);
  g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, g_log_default_handler, NULL);

  GtkBuilder *builder;
  GtkWidget *window;
    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "TP18_ex4.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window1"));
    gtk_builder_connect_signals(builder, NULL);
    //Event handler on button
    GtkWidget *g_button1;
    GtkWidget *g_button2;
    GtkWidget *g_button3;
    g_button1 = GTK_WIDGET(gtk_builder_get_object(builder, "button1"));
    g_button2 = GTK_WIDGET(gtk_builder_get_object(builder, "button2"));
    g_button3 = GTK_WIDGET(gtk_builder_get_object(builder, "button3"));

    input2 = GTK_WIDGET(gtk_builder_get_object(builder, "entry2"));
    input3 = GTK_WIDGET(gtk_builder_get_object(builder, "entry3"));
    input4 = GTK_WIDGET(gtk_builder_get_object(builder, "entry4"));


    //label7 = GTK_WIDGET(gtk_builder_get_object(builder, "label7"));
    //label8 = GTK_WIDGET(gtk_builder_get_object(builder, "label8"));
    //label9 = GTK_WIDGET(gtk_builder_get_object(builder, "label9"));
    //label10 = GTK_WIDGET(gtk_builder_get_object(builder, "label10"));

    g_signal_connect(G_OBJECT(g_button1), "clicked", G_CALLBACK(button1_clicked),NULL);
    g_signal_connect(G_OBJECT(g_button2), "clicked", G_CALLBACK(button2_clicked),NULL);
    g_signal_connect(G_OBJECT(g_button3), "clicked", G_CALLBACK(button3_clicked),NULL);

  /* Enter the main loop */
  gtk_widget_show_all (window);
  gtk_main ();
  return 0;
}
