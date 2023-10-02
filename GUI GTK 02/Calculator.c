#include <stdlib.h>
#include <gtk/gtk.h>

  GtkBuilder *builder;
  GtkWidget *window;
  GtkEntry *entry1;
  GtkEntryBuffer *entrybuffer1;

  gint num , exp1 , exp2 , result;
  char OP;

int main (int argc, char *argv[])
{
  g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, (GLogFunc) gtk_false, NULL);
  gtk_init (&argc, &argv);
  g_log_set_handler ("Gtk", G_LOG_LEVEL_WARNING, g_log_default_handler, NULL);

  builder = gtk_builder_new();
  gtk_builder_add_from_file(builder , "Unsaved 2.glade" , NULL);
  window = GTK_WIDGET(gtk_builder_get_object(builder , "window1"))
  g_signal_connect(window , "destroy", gtk_main_quit , NULL);
  gtk_builder_connect_signals(builder, NULL);

  entry1 = GTK_WIDGET(gtk_builder_get_object(builder , "entry1"));
  gtk_entry_set_alignment(entry1 , 1);
  gtk_entry_set_text("O");
  entrybuffer1 = gtk_entry_get_buffer(GTK_ENTRY(entry1));

  g_object_unref(builder);

  gtk_widget_show_all (win);
  gtk_main ();

  return 0;
}
