#ifndef TATAILLE_GUIDISPLAYENGINE_H
#define TATAILLE_GUIDISPLAYENGINE_H

#include <string>
#include <unordered_map>

#include "DisplayEngine.h"

namespace tataille
{
   class GUIDisplayEngineWindow;
   class Size;
   class Point;
   class Rect;
   class CheckBoxHandler;
   class ComboBoxHandler;
   class ListBoxHandler;
   class ListViewHandler;
   class PushButtonHandler;
   class SliderHandler;
   class TabViewHandler;
   
   class GUIDisplayEngine : public DisplayEngine
   {
   private:
      std::unordered_map<int, GUIDisplayEngineWindow*> m_mapIdToWindows;
      
   public:
      virtual const std::string& getDisplayEngineName() const;
      virtual const std::string& getDisplayEngineTechnology() const;
      virtual const std::string& getDisplayEngineLanguage() const;
      virtual const std::string& getDisplayEngineVersion() const;
      
      GUIDisplayEngineWindow* windowFromId(int windowId);
      GUIDisplayEngineWindow* windowFromCid(const ControlId& cid);
      GUIDisplayEngineWindow* windowFromCi(ControlInfo* ci);

      bool createWindow(int windowId, const Rect& rect);
      bool setRect(const Rect& rect, int windowId);
      bool setSize(const Size& windowSize, int windowId);
      bool setPos(const Point& point, int windowId);
      bool hideWindow(int windowId);
      bool showWindow(int windowId);
      bool setVisible(bool isVisible, int windowId);
      bool setTitle(const std::string& windowTitle, int windowId);
      bool closeWindow(int windowId);
    
      // --------- possible control types --------
      // color picker
      // timer
      // PDF file viewer
      // movie player
      // audio player
    
      bool createCheckBox(ControlInfo* ci);
      bool createComboBox(ControlInfo* ci);
      bool createDatePicker(ControlInfo* ci);
      bool createEntryField(ControlInfo* ci);
      bool createGroupBox(ControlInfo* ci);
      bool createHtmlBrowser(ControlInfo* ci);
      bool createImageView(ControlInfo* ci);
      bool createLevelIndicator(ControlInfo* ci);
      bool createListBox(ControlInfo* ci);
      bool createListView(ControlInfo* ci);
      bool createPanel(ControlInfo* ci);
      bool createPasswordField(ControlInfo* ci);
      bool createProgressBar(ControlInfo* ci);
      bool createPushButton(ControlInfo* ci);
      bool createSegmentedControl(ControlInfo* ci);
      bool createSlider(ControlInfo* ci);
      bool createStaticText(ControlInfo* ci);
      bool createTabView(ControlInfo* ci);
      bool createTextView(ControlInfo* ci);
      bool createTree(ControlInfo* ci);

      bool setFocus(const ControlId& cid);
    
      bool hideControl(const ControlId& cid);
      bool showControl(const ControlId& cid);

      bool hideGroup(const std::string& groupName, int windowId);
      bool showGroup(const std::string& groupName, int windowId);
      bool setVisible(bool isVisible, const ControlId& cid);
      bool setVisible(bool isVisible, int windowId, const std::string& groupName);
    
      bool enableControl(const ControlId& cid);
      bool disableControl(const ControlId& cid);
      bool enableGroup(const std::string& groupName, int windowId);
      bool disableGroup(const std::string& groupName, int windowId);
      bool setEnabled(bool isEnabled, const ControlId& cid);
      bool setEnabled(bool isEnabled, int windowId, const std::string& groupName);
    
      bool setSize(const Size& controlSize, const ControlId& cid);
      bool setPos(const Point& point, const ControlId& cid);
      bool setRect(const Rect& rect, const ControlId& cid);
    
      // CheckBox
      //func setChecked(isChecked: Bool, cid:ControlId);
    
      // ComboBox
      // addItem
      // insertItem
      // removeItem
      // selectItem
      // updateItem
      // clear or removeAll
    
      // EntryField
      // setText
    
      // GroupBox
      // setText
    
      // HtmlBrowser
      // setHtmlText
      // setUrl
    
      // ImageView
      // setImage
    
      // LevelIndicator
      // setLevel
    
      // ListBox
      // addItem
      // deselectItem
      // insertItem
      // removeItem
      // selectItem
      // updateItem
      // clear or removeAll
    
      // ListView
      bool addRow(const std::string& rowText, const ControlId& cid);
      bool removeRow(int rowIndex, const ControlId& cid);
      bool removeAllRows(const ControlId& cid);
      // deselectRow
      // insert
      // selectRow
      // update
    
      // ProgressBar
      // setProgressPercent
    
      // PushButton
      // setText
    
      // Slider
      // setValue

      // StaticText
      bool setStaticText(const std::string& text, const ControlId& cid);
    
      // TabView
      // addTab
      // insertTab
      // updateTab
      // removeTab
      // setTabEnabled
      // setTabVisible
    
      // TextView
      // setText
    
      // Tree
    
      bool setCheckBoxHandler(CheckBoxHandler* handler, const ControlId& cid);
      bool setComboBoxHandler(ComboBoxHandler* handler, const ControlId& cid);
      bool setListBoxHandler(ListBoxHandler* handler, const ControlId& cid);
      bool setListViewHandler(ListViewHandler* handler, const ControlId& cid);
      bool setPushButtonHandler(PushButtonHandler* handler, const ControlId& cid);
      bool setSliderHandler(SliderHandler* handler, const ControlId& cid);
      bool setTabViewHandler(TabViewHandler* handler, const ControlId& cid);
   };
}

#endif
