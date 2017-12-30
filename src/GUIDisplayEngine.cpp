// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#include "GUIDisplayEngine.h"
#include "GUIDisplayEngineWindow.h"
#include "ControlInfo.h"
#include "ControlId.h"

using namespace tataille;

const std::string GUIDisplayEngine::Name        = "GUIDisplayEngine";
const std::string GUIDisplayEngine::Technology  = "Standard C++";
const std::string GUIDisplayEngine::Language    = "C++";
const std::string GUIDisplayEngine::Version     = "0.1";

//******************************************************************************

const std::string& GUIDisplayEngine::getDisplayEngineName() const {
   return Name;
}

//******************************************************************************

const std::string& GUIDisplayEngine::getDisplayEngineTechnology() const {
   return Technology;
}

//******************************************************************************

const std::string& GUIDisplayEngine::getDisplayEngineLanguage() const {
   return Language;
}

//******************************************************************************

const std::string& GUIDisplayEngine::getDisplayEngineVersion() const {
   return Version;
}

//******************************************************************************

GUIDisplayEngineWindow* GUIDisplayEngine::windowFromId(int windowId) {
   std::unordered_map<int, GUIDisplayEngineWindow*>::iterator it =
      m_mapIdToWindows.find(windowId);
   if (it != m_mapIdToWindows.end()) {
      return (*it).second;
   } else {
      return NULL;
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
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setRect(const Rect& rect, int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != NULL) {
      return window->setRect(rect);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setSize(const Size& windowSize, int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != NULL) {
      return window->setSize(windowSize);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setPos(const Point& point, int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != NULL) {
      return window->setPos(point);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::hideWindow(int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != NULL) {
      return window->hideWindow();
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::showWindow(int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != NULL) {
      return window->showWindow();
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setVisible(bool isVisible, int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != NULL) {
      return window->setVisible(isVisible);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setTitle(const std::string& windowTitle, int windowId) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != NULL) {
      return window->setTitle(windowTitle);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::closeWindow(int windowId) {
   return false;
}

//******************************************************************************
    
bool GUIDisplayEngine::createCheckBox(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createCheckBox(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createComboBox(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createComboBox(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createDatePicker(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createDatePicker(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createEntryField(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createEntryField(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createGroupBox(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createGroupBox(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createHtmlBrowser(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createHtmlBrowser(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createImageView(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createImageView(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createLevelIndicator(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createLevelIndicator(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createListBox(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createListBox(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createListView(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createListView(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createPanel(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createPanel(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createPasswordField(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createPasswordField(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createProgressBar(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createProgressBar(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createPushButton(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createPushButton(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createSegmentedControl(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createSegmentedControl(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createSlider(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createSlider(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createStaticText(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createStaticText(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createTabView(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createTabView(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createTextView(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createTextView(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::createTree(ControlInfo* ci) {
   GUIDisplayEngineWindow* window = windowFromCi(ci);
   if (window != NULL) {
      return window->createTree(ci);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setFocus(const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setFocus(cid);
   }
   
   return false;
}

//******************************************************************************
    
bool GUIDisplayEngine::hideControl(const ControlId& cid) {
   return setVisible(false, cid);
}

//******************************************************************************

bool GUIDisplayEngine::showControl(const ControlId& cid) {
   return setVisible(true, cid);
}

//******************************************************************************

bool GUIDisplayEngine::hideGroup(const std::string& groupName, int windowId) {
   return setVisible(false, windowId, groupName);
}

//******************************************************************************

bool GUIDisplayEngine::showGroup(const std::string& groupName, int windowId) {
   return setVisible(true, windowId, groupName);
}

//******************************************************************************

bool GUIDisplayEngine::setVisible(bool isVisible, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setVisible(isVisible, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setVisible(bool isVisible,
                                  int windowId,
                                  const std::string& groupName) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != NULL) {
      return window->setVisible(true, groupName);
   }
   
   return false;
}

//******************************************************************************
    
bool GUIDisplayEngine::enableControl(const ControlId& cid) {
   return setEnabled(true, cid);
}

//******************************************************************************

bool GUIDisplayEngine::disableControl(const ControlId& cid) {
   return setEnabled(false, cid);
}

//******************************************************************************

bool GUIDisplayEngine::enableGroup(const std::string& groupName,
                                   int windowId) {
   return setEnabled(true, windowId, groupName);
}

//******************************************************************************

bool GUIDisplayEngine::disableGroup(const std::string& groupName,
                                    int windowId) {
   return setEnabled(false, windowId, groupName);
}

//******************************************************************************

bool GUIDisplayEngine::setEnabled(bool isEnabled, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setEnabled(isEnabled, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setEnabled(bool isEnabled,
                                  int windowId,
                                  const std::string& groupName) {
   GUIDisplayEngineWindow* window = windowFromId(windowId);
   if (window != NULL) {
      return window->setEnabled(isEnabled, groupName);
   }
   
   return false;
}

//******************************************************************************
    
bool GUIDisplayEngine::setSize(const Size& controlSize, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setSize(controlSize, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setPos(const Point& point, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setPos(point, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setRect(const Rect& rect, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setRect(rect, cid);
   }
   
   return false;
}

//******************************************************************************
    
bool GUIDisplayEngine::addRow(const std::string& rowText,
                              const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->addRow(rowText, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::removeRow(int rowIndex, const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->removeRow(rowIndex, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::removeAllRows(const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->removeAllRows(cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setStaticText(const std::string& text,
                                     const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setStaticText(text, cid);
   }
   
   return false;
}

//******************************************************************************
    
bool GUIDisplayEngine::setCheckBoxHandler(CheckBoxHandler* handler,
                                          const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setCheckBoxHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setComboBoxHandler(ComboBoxHandler* handler,
                                          const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setComboBoxHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setListBoxHandler(ListBoxHandler* handler,
                                         const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setListBoxHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setListViewHandler(ListViewHandler* handler,
                                          const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setListViewHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setPushButtonHandler(PushButtonHandler* handler,
                                            const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setPushButtonHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

bool GUIDisplayEngine::setSliderHandler(SliderHandler* handler,
                                        const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setSliderHandler(handler, cid);
   }
   
   return false;   
}

//******************************************************************************

bool GUIDisplayEngine::setTabViewHandler(TabViewHandler* handler,
                                         const ControlId& cid) {
   GUIDisplayEngineWindow* window = windowFromCid(cid);
   if (window != NULL) {
      return window->setTabViewHandler(handler, cid);
   }
   
   return false;
}

//******************************************************************************

