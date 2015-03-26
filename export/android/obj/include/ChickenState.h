#ifndef INCLUDED_ChickenState
#define INCLUDED_ChickenState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(ChickenState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)


class HXCPP_CLASS_ATTRIBUTES  ChickenState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef ChickenState_obj OBJ_;
		ChickenState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ChickenState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ChickenState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ChickenState"); }

		::flixel::FlxSprite chicken;
		::flixel::FlxSprite cargoingleft1;
		::flixel::FlxSprite cargoingleft1copy;
		::flixel::FlxSprite cargoingleft1copy2;
		::flixel::FlxSprite cargoingright1;
		::flixel::FlxSprite cargoingright1copy;
		::flixel::FlxSprite cargoingright1copy2;
		::flixel::FlxSprite cargoingleft2;
		::flixel::FlxSprite cargoingleft2copy;
		::flixel::FlxSprite cargoingleft2copy2;
		::flixel::FlxSprite cargoingright2;
		::flixel::FlxSprite cargoingright2copy;
		::flixel::FlxSprite cargoingright2copy2;
		::flixel::FlxSprite cargoingleft3;
		::flixel::FlxSprite cargoingleft3copy;
		::flixel::FlxSprite cargoingleft3copy2;
		::flixel::FlxSprite cargoingright3;
		::flixel::FlxSprite cargoingright3copy;
		::flixel::FlxSprite cargoingright3copy2;
		::flixel::FlxSprite killcar;
		::flixel::addons::display::FlxBackdrop background;
		int velocidad;
		bool firstpass;
		bool canMove;
		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		virtual ::flixel::util::FlxPoint clickCoords( );
		Dynamic clickCoords_dyn();

		virtual Void create( );

		virtual Void update( );

		virtual Void destroy( );

		virtual Void runover( );
		Dynamic runover_dyn();

		virtual Void startwait( ::flixel::util::FlxTimer Timer);
		Dynamic startwait_dyn();

		virtual Void startstart( ::flixel::util::FlxTimer Timer);
		Dynamic startstart_dyn();

		virtual Void endgame( ::flixel::util::FlxTimer Timer);
		Dynamic endgame_dyn();

		virtual Void gameOver( ::flixel::util::FlxTimer Timer);
		Dynamic gameOver_dyn();

		virtual Void clickMenu( );
		Dynamic clickMenu_dyn();

		virtual Void clickSkip( );
		Dynamic clickSkip_dyn();

};


#endif /* INCLUDED_ChickenState */ 