#include "GUIDisplayEngineWindow.h"

using namespace tataille;

//******************************************************************************

bool GUIDisplayEngineWindow::registerControl(ControlInfo* ci, DisplayEngineWidget* widget)
{
   
}

//******************************************************************************

DisplayEngineWidget* GUIDisplayEngineWindow::controlFromCid(const ControlId& cid)
{
   DisplayEngineWidget* widget = nullptr;
   
   if (cid.controlId > -1) {
      auto it = m_mapIntToWidgets.find(cid.controlId);
      if (it != m_mapIntToWidgets.end()) {
         widget = (*it).second;
      }
   }
   
   return widget;
}

//******************************************************************************

bool GUIDisplayEngineWindow::hideWindow()
{
   return setVisible(false);
}

//******************************************************************************

bool GUIDisplayEngineWindow::showWindow()
{
   return setVisible(true);
}

//******************************************************************************

bool GUIDisplayEngineWindow::closeWindow()
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setFocus(const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::hideControl(const ControlId& cid)
{
   return setVisible(false, cid);
}

//******************************************************************************

bool GUIDisplayEngineWindow::showControl(const ControlId& cid)
{
   return setVisible(true, cid);
}

//******************************************************************************

bool GUIDisplayEngineWindow::hideGroup(const std::string& groupName)
{
   return setVisible(false, groupName);
}

//******************************************************************************

bool GUIDisplayEngineWindow::showGroup(const std::string& groupName)
{
   return setVisible(true, groupName);
}

//******************************************************************************

bool GUIDisplayEngineWindow::setVisible(bool isVisible, const ControlId& cid)
{
}

//******************************************************************************

bool GUIDisplayEngineWindow::setVisible(bool isVisible, const std::string& groupName)
{
   auto itGroupControls = m_mapGroupControls.find(groupName);
   if (itGroupControls != m_mapGroupControls.end()) {
      std::vector<ControlId>& listControls = (*itGroupControls).second;
      for (ControlId& cid : listControls) {
         setVisible(isVisible, cid);
      }
      
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::enableControl(const ControlId& cid)
{
   return setEnabled(true, cid);
}

//******************************************************************************

bool GUIDisplayEngineWindow::disableControl(const ControlId& cid)
{
   return setEnabled(false, cid);
}

//******************************************************************************

bool GUIDisplayEngineWindow::enableGroup(const std::string& groupName)
{
   return setEnabled(true, groupName);
}

//******************************************************************************

bool GUIDisplayEngineWindow::disableGroup(const std::string& groupName)
{
   return setEnabled(false, groupName);
}

//******************************************************************************

bool GUIDisplayEngineWindow::setEnabled(bool isEnabled, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setEnabled(bool isEnabled, const std::string& groupName)
{
   auto itGroupControls = m_mapGroupControls.find(groupName);
   if (itGroupControls != m_mapGroupControls.end()) {
      std::vector<ControlId>& listControls = (*itGroupControls).second;
      for (ControlId& cid : listControls) {
         setEnabled(isEnabled, cid);
      }
      
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setSize(const Size& controlSize, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setPos(const Point& point, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setRect(const Rect& rect, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::addRow(const std::string& rowText, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::removeRow(int rowIndex, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::removeAllRows(const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setStaticText(const std::string& text, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setCheckBoxHandler(CheckBoxHandler* handler, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setComboBoxHandler(ComboBoxHandler* handler, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setListBoxHandler(ListBoxHandler* handler, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setListViewHandler(ListViewHandler* handler, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setPushButtonHandler(PushButtonHandler* handler, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setSliderHandler(SliderHandler* handler, const ControlId& cid)
{
   
}

//******************************************************************************

bool GUIDisplayEngineWindow::setTabViewHandler(TabViewHandler* handler, const ControlId& cid)
{
   if (cid.isValid() && (handler != nullptr)) {
      m_mapTabViewHandlers[cid.controlId] = handler;
   }
   
   return false;
}

//******************************************************************************

