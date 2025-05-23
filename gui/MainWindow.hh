#pragma once



#include "DeviceWidget.hh"

#include <gtkmm/grid.h>
#include <gtkmm/label.h>
#include <giomm/settings.h>
#include <gtkmm/window.h>

#include "../asha/Asha.hh"
#include "../asha/BluetoothMonitor.hh"

class MainWindow : public Gtk::Window
{
public:
   MainWindow();
   virtual ~MainWindow();

protected:
   void SetId(uint64_t);
   void OnReconnectRssiChanged();

private:
   Gtk::Grid m_layout;
   Gtk::Label m_pw_name;
   Gtk::Label m_hisync_label;
   Gtk::Label m_hisync;
   Gtk::Label m_rssi_reconnect_label;
   Gtk::Scale m_rssi_reconnect;

   DeviceWidget m_left;
   DeviceWidget m_right;

   asha::Asha m_asha;
   asha::BluetoothMonitor m_monitor;
};