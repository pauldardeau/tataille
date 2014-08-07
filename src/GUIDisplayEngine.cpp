#include "GUIDisplayEngine.h"
#include "GUIDisplayEngineWindow.h"
#include "ControlInfo.h"
#include "ControlId.h"

using namespace tataille;

//******************************************************************************

const std::string& GUIDisplayEngine::getDisplayEngineName() const {
   
}

//******************************************************************************

const std::string& GUIDisplayEngine::getDisplayEngineTechnology() const {
   
}

//******************************************************************************

const std::string& GUIDisplayEngine::getDisplayEngineLanguage() const {
   
}

//******************************************************************************

const std::string& GUIDisplayEngine::getDisplayEngineVersion() const {
   
}

//******************************************************************************

GUIDisplayEngineWindow* GUIDisplayEngine::windowFromId(int windowId) {
   auto it = m_mapIdToWindows.find(windowId);
   if (it != m_mapIdToWindows.end()) {
      return (*it).second;
   } else {
      return nullptr;
   }
}

//******************************************************************************

GUIDisplayEngineWindow* GUIDisplayEngine::windowFromCid(const ControlId& cid) {
   return windowFromId(cid.windowId);
}

//******************************************************************************

GUIDisplayEngineWindow* GUIDisplayEngine::windowFromCi(ControlInfo* ci) {
   return windowFromCid(ci->cid);
}

//******************************************************************************

bool GUIDisplayEngine::createWindow(int windowId, const Rect& rect) {
   
}

//******************************************************************************

bool GUIDisplayEngine::setRect(const Rect& rect, int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != nullptr) {
      return window->setRect(rect);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setSize(const Size& windowSize, int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != nullptr) {
      return window->setSize(windowSize);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setPos(const Point& point, int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != nullptr) {
      return window->setPos(point);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::hideWindow(int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != nullptr) {
      return window->hideWindow();
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::showWindow(int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != nullptr) {
      return window->showWindow();
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setVisible(bool isVisible, int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != nullptr) {
      return window->setVisible(isVisible);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setTitle(const std::string& windowTitle, int windowId) {
   
}

//******************************************************************************

bool GUIDisplayEngine::closeWindow(int windowId) {
   
}

//******************************************************************************
    
bool GUIDisplayEngine::createCheckBox(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createComboBox(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createDatePicker(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createEntryField(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createGroupBox(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createHtmlBrowser(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createImageView(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createLevelIndicator(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createListBox(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createListView(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createPanel(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createPasswordField(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createProgressBar(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createPushButton(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createSegmentedControl(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createSlider(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createStaticText(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createTabView(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createTextView(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::createTree(ControlInfo* ci) {
   
}

//******************************************************************************

bool GUIDisplayEngine::setFocus(const ControlId& cid) {
   
}

//******************************************************************************
    
bool GUIDisplayEngine::hideControl(const ControlId& cid) {
   
}

//******************************************************************************

bool GUIDisplayEngine::showControl(const ControlId& cid) {
   
}

//******************************************************************************

bool GUIDisplayEngine::hideGroup(const std::string& groupName, int windowId) {
   
}

//******************************************************************************

bool GUIDisplayEngine::showGroup(const std::string& groupName, int windowId) {
   
}

//******************************************************************************

bool GUIDisplayEngine::setVisible(bool isVisible, const ControlId& cid) {
   
}

//******************************************************************************

bool GUIDisplayEngine::setVisible(bool isVisible, int windowId, const std::string& groupName) {
   
}

//******************************************************************************
    
bool GUIDisplayEngine::enableControl(const ControlId& cid) {
   
}

//******************************************************************************

bool GUIDisplayEngine::disableControl(const ControlId& cid) {
   
}

//******************************************************************************

bool GUIDisplayEngine::enableGroup(const std::string& groupName, int windowId) {
   
}

//******************************************************************************

bool GUIDisplayEngine::disableGroup(const std::string& groupName, int windowId) {
   
}

//******************************************************************************

bool GUIDisplayEngine::setEnabled(bool isEnabled, const ControlId& cid) {
   
}

//******************************************************************************

bool GUIDisplayEngine::setEnabled(bool isEnabled, int windowId, const std::string& groupName) {
   
}

//******************************************************************************
    
bool GUIDisplayEngine::setSize(const Size& controlSize, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setSize(controlSize, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setPos(const Point& point, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setPos(point, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setRect(const Rect& rect, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setRect(rect, cid);
   }
   
   return false;
}

//******************************************************************************
    
bool GUIDisplayEngine::addRow(const std::string& rowText, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->addRow(rowText, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::removeRow(int rowIndex, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->removeRow(rowIndex, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::removeAllRows(const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->removeAllRows(cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setStaticText(const std::string& text, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setStaticText(text, cid);
   }
   
   return false;
}

//******************************************************************************
    
bool GUIDisplayEngine::setCheckBoxHandler(CheckBoxHandler* handler, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setCheckBoxHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setComboBoxHandler(ComboBoxHandler* handler, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setComboBoxHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setListBoxHandler(ListBoxHandler* handler, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setListBoxHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setListViewHandler(ListViewHandler* handler, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setListViewHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setPushButtonHandler(PushButtonHandler* handler, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setPushButtonHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setSliderHandler(SliderHandler* handler, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setSliderHandler(handler, cid);
   }
   
   return false;   
}

//******************************************************************************

bool GUIDisplayEngine::setTabViewHandler(TabViewHandler* handler, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != nullptr) {
      return window->setTabViewHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

