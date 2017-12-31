// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#ifndef TATAILLE_GUIDISPLAYENGINEWINDOW_H
#define TATAILLE_GUIDISPLAYENGINEWINDOW_H

#include <string>
#include <vector>
#include <map>

#include "DisplayEngineWindow.h"
#include "DisplayEngineWidget.h"
#include "ControlId.h"


namespace tataille
{
   class ControlInfo;
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


   class GUIDisplayEngineWindow : public DisplayEngineWindow
   {
   private:
      std::map<std::string, std::vector<ControlId> > m_mapGroupControls;
      std::map<int, DisplayEngineWidget*> m_mapIntToWidgets;
      
      std::map<int, CheckBoxHandler*> m_mapCheckBoxHandlers;
      std::map<int, ComboBoxHandler*> m_mapComboBoxHandlers;
      std::map<int, ListBoxHandler*> m_mapListBoxHandlers;
      std::map<int, ListViewHandler*> m_mapListViewHandlers;
      std::map<int, PushButtonHandler*> m_mapPushButtonHandlers;
      std::map<int, SliderHandler*> m_mapSliderHandlers;
      std::map<int, TabViewHandler*> m_mapTabViewHandlers;
      
   protected:
      bool registerControl(ControlInfo* ci, DisplayEngineWidget* widget);
      DisplayEngineWidget* controlFromCid(const ControlId& cid);
      
   public:
      virtual bool setRect(const Rect& rect) = 0;
      virtual bool setSize(const Size& windowSize) = 0;
      virtual bool setPos(const Point& point) = 0;
      bool hideWindow();
      bool showWindow();
      virtual bool setVisible(bool isVisible) = 0;
      virtual bool setTitle(const std::string& windowTitle) = 0;
      virtual bool closeWindow() = 0;
    
      virtual bool createCheckBox(ControlInfo* ci) = 0;
      virtual bool createComboBox(ControlInfo* ci) = 0;
      virtual bool createDatePicker(ControlInfo* ci) = 0;
      virtual bool createEntryField(ControlInfo* ci) = 0;
      virtual bool createGroupBox(ControlInfo* ci) = 0;
      virtual bool createHtmlBrowser(ControlInfo* ci) = 0;
      virtual bool createImageView(ControlInfo* ci) = 0;
      virtual bool createLevelIndicator(ControlInfo* ci) = 0;
      virtual bool createListBox(ControlInfo* ci) = 0;
      virtual bool createListView(ControlInfo* ci) = 0;
      virtual bool createPanel(ControlInfo* ci) = 0;
      virtual bool createPasswordField(ControlInfo* ci) = 0;
      virtual bool createProgressBar(ControlInfo* ci) = 0;
      virtual bool createPushButton(ControlInfo* ci) = 0;
      virtual bool createSegmentedControl(ControlInfo* ci) = 0;
      virtual bool createSlider(ControlInfo* ci) = 0;
      virtual bool createStaticText(ControlInfo* ci) = 0;
      virtual bool createTabView(ControlInfo* ci) = 0;
      virtual bool createTextView(ControlInfo* ci) = 0;
      virtual bool createTree(ControlInfo* ci) = 0;

      bool setFocus(const ControlId& cid);
    
      bool hideControl(const ControlId& cid);
      bool showControl(const ControlId& cid);

      bool hideGroup(const std::string& groupName);
      bool showGroup(const std::string& groupName);
      bool setVisible(bool isVisible, const ControlId& cid);
      bool setVisible(bool isVisible, const std::string& groupName);
    
      bool enableControl(const ControlId& cid);
      bool disableControl(const ControlId& cid);
      bool enableGroup(const std::string& groupName);
      bool disableGroup(const std::string& groupName);
      bool setEnabled(bool isEnabled, const ControlId& cid);
      bool setEnabled(bool isEnabled, const std::string& groupName);
    
      bool setSize(const Size& controlSize, const ControlId& cid);
      bool setPos(const Point& point, const ControlId& cid);
      bool setRect(const Rect& rect, const ControlId& cid);
    
      // ListView
      virtual bool addRow(const std::string& rowText, const ControlId& cid) = 0;
      virtual bool removeRow(int rowIndex, const ControlId& cid) = 0;
      virtual bool removeAllRows(const ControlId& cid) = 0;

      // StaticText
      virtual bool setStaticText(const std::string& text, const ControlId& cid) = 0;
    
    
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
