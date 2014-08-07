// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#ifndef TATAILLE_DISPLAYENGINE_H
#define TATAILLE_DISPLAYENGINE_H

#include <string>


namespace tataille
{
   class ControlId;
   class ControlInfo;
   class Rect;
   
   /**
    * DisplayEngine is the interface (abstract base class) that is used by all conforming
    * concrete display engines. It's essentiallly the primary API for the application
    * developer.
    */
   class DisplayEngine
   {
   public:
      virtual ~DisplayEngine() {}
      
      virtual const std::string& getDisplayEngineName() const = 0;
      virtual const std::string& getDisplayEngineTechnology() const = 0;
      virtual const std::string& getDisplayEngineLanguage() const = 0;
      virtual const std::string& getDisplayEngineVersion() const = 0;
      
      virtual bool createWindow(int windowId, const Rect& rect) = 0;
      virtual bool setWindowRect(int windowId, const Rect& rect) = 0;
      virtual bool setWindowSize(int windowId, int width, int height) = 0;
      virtual bool setWindowPos(int windowId, int x, int y) = 0;
      virtual bool hideWindow(int windowId) = 0;
      virtual bool showWindow(int windowId) = 0;
      virtual bool setWindowVisible(int windowId, bool isVisible) = 0;
      virtual bool setWindowTitle(int windowId, const std::string& windowTitle) = 0;
      virtual bool closeWindow(int windowId) = 0;
      
      virtual bool createPushButton(const ControlInfo& ci) = 0;
      virtual bool createStaticText(const ControlInfo& ci) = 0;
      virtual bool createEntryField(const ControlInfo& ci) = 0;
      virtual bool createTextView(const ControlInfo& ci) = 0;
      virtual bool createComboBox(const ControlInfo& ci) = 0;
      virtual bool createListBox(const ControlInfo& ci) = 0;
      virtual bool createListView(const ControlInfo& ci) = 0;
      virtual bool createTabView(const ControlInfo& ci) = 0;
      virtual bool createPanel(const ControlInfo& ci) = 0;
      virtual bool createGroupBox(const ControlInfo& ci) = 0;
      virtual bool createSlider(const ControlInfo& ci) = 0;
      virtual bool createCheckBox(const ControlInfo& ci) = 0;
      virtual bool createTree(const ControlInfo& ci) = 0;
      virtual bool createProgressBar(const ControlInfo& ci) = 0;
      virtual bool createImageView(const ControlInfo& ci) = 0;
      
      virtual bool hideControl(const ControlId& cid) = 0;
      virtual bool showControl(const ControlId& cid) = 0;
      virtual bool setControlVisible(const ControlId& cid, bool isVisible) = 0;
      
      virtual bool enableControl(const ControlId& cid) = 0;
      virtual bool disableControl(const ControlId& cid) = 0;
      virtual bool setControlEnabled(const ControlId& cid, bool isEnabled) = 0;
   };
}

#endif
