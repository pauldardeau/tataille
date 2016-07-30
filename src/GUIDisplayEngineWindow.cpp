// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#include "GUIDisplayEngineWindow.h"

using namespace tataille;

//******************************************************************************

bool GUIDisplayEngineWindow::registerControl(ControlInfo* ci,
                                             DisplayEngineWidget* widget) {
   return false;
}

//******************************************************************************

DisplayEngineWidget* GUIDisplayEngineWindow::controlFromCid(const ControlId& cid) {
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

bool GUIDisplayEngineWindow::hideWindow() {
   return setVisible(false);
}

//******************************************************************************

bool GUIDisplayEngineWindow::showWindow() {
   return setVisible(true);
}

//******************************************************************************

bool GUIDisplayEngineWindow::setFocus(const ControlId& cid) {
   DisplayEngineWidget* control = controlFromCid(cid);
   if (control != nullptr) {
      control->setFocus();
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::hideControl(const ControlId& cid) {
   return setVisible(false, cid);
}

//******************************************************************************

bool GUIDisplayEngineWindow::showControl(const ControlId& cid) {
   return setVisible(true, cid);
}

//******************************************************************************

bool GUIDisplayEngineWindow::hideGroup(const std::string& groupName) {
   return setVisible(false, groupName);
}

//******************************************************************************

bool GUIDisplayEngineWindow::showGroup(const std::string& groupName) {
   return setVisible(true, groupName);
}

//******************************************************************************

bool GUIDisplayEngineWindow::setVisible(bool isVisible, const ControlId& cid) {
   DisplayEngineWidget* control = controlFromCid(cid);
   if (control != nullptr) {
      control->setVisible(isVisible);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setVisible(bool isVisible,
                                        const std::string& groupName) {
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

bool GUIDisplayEngineWindow::enableControl(const ControlId& cid) {
   return setEnabled(true, cid);
}

//******************************************************************************

bool GUIDisplayEngineWindow::disableControl(const ControlId& cid) {
   return setEnabled(false, cid);
}

//******************************************************************************

bool GUIDisplayEngineWindow::enableGroup(const std::string& groupName) {
   return setEnabled(true, groupName);
}

//******************************************************************************

bool GUIDisplayEngineWindow::disableGroup(const std::string& groupName) {
   return setEnabled(false, groupName);
}

//******************************************************************************

bool GUIDisplayEngineWindow::setEnabled(bool isEnabled, const ControlId& cid) {
   DisplayEngineWidget* control = controlFromCid(cid);
   if (control != nullptr) {
      control->setEnabled(isEnabled);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setEnabled(bool isEnabled,
                                        const std::string& groupName) {
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

bool GUIDisplayEngineWindow::setSize(const Size& controlSize,
                                     const ControlId& cid) {
   DisplayEngineWidget* control = controlFromCid(cid);
   if (control != nullptr) {
      control->setSize(controlSize);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setPos(const Point& point, const ControlId& cid) {
   DisplayEngineWidget* control = controlFromCid(cid);
   if (control != nullptr) {
      control->setPos(point);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setRect(const Rect& rect, const ControlId& cid) {
   DisplayEngineWidget* control = controlFromCid(cid);
   if (control != nullptr) {
      control->setRect(rect);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setCheckBoxHandler(CheckBoxHandler* handler,
                                                const ControlId& cid) {
   if (cid.isValid() && (handler != nullptr)) {
      m_mapCheckBoxHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setComboBoxHandler(ComboBoxHandler* handler,
                                                const ControlId& cid) {
   if (cid.isValid() && (handler != nullptr)) {
      m_mapComboBoxHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setListBoxHandler(ListBoxHandler* handler,
                                               const ControlId& cid) {
   if (cid.isValid() && (handler != nullptr)) {
      m_mapListBoxHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setListViewHandler(ListViewHandler* handler,
                                                const ControlId& cid) {
   if (cid.isValid() && (handler != nullptr)) {
      m_mapListViewHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setPushButtonHandler(PushButtonHandler* handler,
                                                  const ControlId& cid) {
   if (cid.isValid() && (handler != nullptr)) {
      m_mapPushButtonHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setSliderHandler(SliderHandler* handler,
                                              const ControlId& cid) {
   if (cid.isValid() && (handler != nullptr)) {
      m_mapSliderHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setTabViewHandler(TabViewHandler* handler,
                                               const ControlId& cid) {
   if (cid.isValid() && (handler != nullptr)) {
      m_mapTabViewHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

