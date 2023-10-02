#include <stdlib.h>
#include <gtk/gtk.h>

GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *input7;
GtkWidget *input8;
GtkWidget *input9;
GtkWidget *input10;
GtkWidget *input11;
void btnSubmit_clicked(){
    char *first;
    char *last;
    char *DateOfBirth;
    char *Male;
    char *Female;
    char *FName;
    char *MName;
    char *email;
    char *level;
    char *depart;
    char *tel;
    first =  gtk_entry_get_text(input1);
    last = gtk_entry_get_text(input2);
    DateOfBirth =gtk_entry_get_text(input3);
    Male= gtk_entry_get_text(input4);
    Female=gtk_entry_get_text(input5);
    MName=gtk_entry_get_text(input6);
    FName=gtk_entry_get_text(input7);
    email = gtk_entry_get_text(input8);
    level= gtk_entry_get_text(9);
    depart=gtk_entry_get_text(input10);
    tel = gtk_entry_get_text(input11);

      printf("%s\n",first);
        printf("%s\n",last);
          printf("%s\n",DateOfBirth);
            printf("%s\n",Male);
              printf("%s\n",Female);
                printf("%s\n",FName);
                  printf("%s\n",MName);
    printf("%s\n",email);
    printf("%s\n", level);
      printf("%s\n",depart);
        printf("%s\n",tel);
}
int main (int argc, char *argv[])
{


  /* Initialize GTK+ */
  g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, (GLogFunc) gtk_false, NULL);
  gtk_init (&argc, &argv);
  g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, g_log_default_handler, NULL);

  GtkBuilder * builder;
  GtkWidget * window;

  builder = gtk_builder_new();
  gtk_builder_add_from_file(builder, "StudentRegistrationForm.glade", NULL);

  window = GTK_WIDGET(gtk_builder_get_object(builder, "window1"));
  gtk_builder_connect_signals(builder, NULL);


   GtkWidget *g_btnSubmit;
    g_btnSubmit = GTK_WIDGET(gtk_builder_get_object(builder, "btnSubmit"));

    input1 = GTK_WIDGET(gtk_builder_get_object(builder, "entry1"));
    input2 = GTK_WIDGET(gtk_builder_get_object(builder, "entry2"));
    input3 = GTK_WIDGET(gtk_builder_get_object(builder, "entry3"));
    input4 = GTK_WIDGET(gtk_builder_get_object(builder, "entry4"));
    input5 = GTK_WIDGET(gtk_builder_get_object(builder, "entry5"));
    input6 = GTK_WIDGET(gtk_builder_get_object(builder, "entry6"));
    input7 = GTK_WIDGET(gtk_builder_get_object(builder, "entry7"));
    input8 = GTK_WIDGET(gtk_builder_get_object(builder, "entry8"));
    input9 = GTK_WIDGET(gtk_builder_get_object(builder, "entry9"));
    input10 = GTK_WIDGET(gtk_builder_get_object(builder, "entry10"));
    input11 = GTK_WIDGET(gtk_builder_get_object(builder, "entry11"));

    g_signal_connect(G_OBJECT(g_btnSubmit),"clicked", G_CALLBACK(btnSubmit_clicked), NULL);



  /* Enter the main loop */
  gtk_widget_show_all (window);
  gtk_main ();
  return 0;
}


