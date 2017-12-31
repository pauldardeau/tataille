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
   DisplayEngineWidget* widget = NULL;
   
   if (cid.controlId > -1) {
      std::map<int, DisplayEngineWidget*>::iterator it =
         m_mapIntToWidgets.find(cid.controlId);
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
   if (control != NULL) {
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
   if (control != NULL) {
      control->setVisible(isVisible);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setVisible(bool isVisible,
                                        const std::string& groupName) {
   std::map<std::string, std::vector<ControlId> >::iterator itGroupControls = m_mapGroupControls.find(groupName);
   if (itGroupControls != m_mapGroupControls.end()) {
      std::vector<ControlId>& listControls = (*itGroupControls).second;
      std::vector<ControlId>::iterator itControls = listControls.begin();
      const std::vector<ControlId>::const_iterator itControlsEnd =
         listControls.end();
      for (; itControls != itControlsEnd; itControls++) {
         ControlId& cid = *itControls;
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
   if (control != NULL) {
      control->setEnabled(isEnabled);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setEnabled(bool isEnabled,
                                        const std::string& groupName) {
   std::map<std::string, std::vector<ControlId> >::iterator itGroupControls = m_mapGroupControls.find(groupName);
   if (itGroupControls != m_mapGroupControls.end()) {
      std::vector<ControlId>& listControls = (*itGroupControls).second;
      std::vector<ControlId>::iterator itControls = listControls.begin();
      const std::vector<ControlId>::const_iterator itControlsEnd =
         listControls.end();
      for (; itControls != itControlsEnd; itControls++) {
         ControlId& cid = *itControls;
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
   if (control != NULL) {
      control->setSize(controlSize);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setPos(const Point& point, const ControlId& cid) {
   DisplayEngineWidget* control = controlFromCid(cid);
   if (control != NULL) {
      control->setPos(point);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setRect(const Rect& rect, const ControlId& cid) {
   DisplayEngineWidget* control = controlFromCid(cid);
   if (control != NULL) {
      control->setRect(rect);
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setCheckBoxHandler(CheckBoxHandler* handler,
                                                const ControlId& cid) {
   if (cid.isValid() && (handler != NULL)) {
      m_mapCheckBoxHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setComboBoxHandler(ComboBoxHandler* handler,
                                                const ControlId& cid) {
   if (cid.isValid() && (handler != NULL)) {
      m_mapComboBoxHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setListBoxHandler(ListBoxHandler* handler,
                                               const ControlId& cid) {
   if (cid.isValid() && (handler != NULL)) {
      m_mapListBoxHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setListViewHandler(ListViewHandler* handler,
                                                const ControlId& cid) {
   if (cid.isValid() && (handler != NULL)) {
      m_mapListViewHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setPushButtonHandler(PushButtonHandler* handler,
                                                  const ControlId& cid) {
   if (cid.isValid() && (handler != NULL)) {
      m_mapPushButtonHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setSliderHandler(SliderHandler* handler,
                                              const ControlId& cid) {
   if (cid.isValid() && (handler != NULL)) {
      m_mapSliderHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngineWindow::setTabViewHandler(TabViewHandler* handler,
                                               const ControlId& cid) {
   if (cid.isValid() && (handler != NULL)) {
      m_mapTabViewHandlers[cid.controlId] = handler;
      return true;
   }
   
   return false;
}

//******************************************************************************

