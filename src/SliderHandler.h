// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#ifndef TATAILLE_SLIDERHANDLER_H
#define TATAILLE_SLIDERHANDLER_H


namespace tataille
{
   class SliderHandler
   {
   public:
      virtual ~SliderHandler() {}
      
      virtual void sliderValueSelected(int valuePercent) = 0;
   };
}
