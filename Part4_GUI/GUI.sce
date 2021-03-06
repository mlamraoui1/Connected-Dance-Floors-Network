// This GUI file is generated by guibuilder version 4.2.1
//////////
f=figure('figure_position',[-8,32],'figure_size',[1382,744],'auto_resize','on','background',[33],'figure_name','Figure n°%d','dockable','off','infobar_visible','off','toolbar_visible','off','menubar_visible','off','default_axes','on','visible','off');
//////////
handles.dummy = 0;
handles.title=uicontrol(f,'unit','normalized','BackgroundColor',[1,1,1],'Enable','on','FontAngle','normal','FontName','Candara','FontSize',[24],'FontUnits','points','FontWeight','normal','ForegroundColor',[0,0,0],'HorizontalAlignment','left','ListboxTop',[],'Max',[1],'Min',[0],'Position',[0.3603125,0.9195833,0.2446875,0.055],'Relief','default','SliderStep',[0.01,0.1],'String','Pressure Sensor Network Project','Style','text','Value',[0],'VerticalAlignment','middle','Visible','on','Tag','title','Callback','')
handles.start=uicontrol(f,'unit','normalized','BackgroundColor',[-1,-1,-1],'Enable','on','FontAngle','normal','FontName','Tahoma','FontSize',[12],'FontUnits','points','FontWeight','normal','ForegroundColor',[-1,-1,-1],'HorizontalAlignment','center','ListboxTop',[],'Max',[1],'Min',[0],'Position',[0.9172269,0.5008333,0.092521,0.0666667],'Relief','default','SliderStep',[0.01,0.1],'String','Start','Style','pushbutton','Value',[0],'VerticalAlignment','middle','Visible','on','Tag','start','Callback','start_callback(handles)')
handles.quit=uicontrol(f,'unit','normalized','BackgroundColor',[-1,-1,-1],'Enable','on','FontAngle','normal','FontName','Tahoma','FontSize',[12],'FontUnits','points','FontWeight','normal','ForegroundColor',[-1,-1,-1],'HorizontalAlignment','center','ListboxTop',[],'Max',[1],'Min',[0],'Position',[0.9172269,0.3808333,0.092521,0.0666667],'Relief','default','SliderStep',[0.01,0.1],'String','Quit','Style','pushbutton','Value',[0],'VerticalAlignment','middle','Visible','on','Tag','quit','Callback','quit_callback(handles)')
handles.sensor1=uicontrol(f,'unit','normalized','BackgroundColor',[-1,-1,-1],'Enable','on','FontAngle','normal','FontName','Candara','FontSize',[14],'FontUnits','points','FontWeight','normal','ForegroundColor',[-1,-1,-1],'HorizontalAlignment','left','ListboxTop',[],'Max',[1],'Min',[0],'Position',[0.3788235,0.835,0.0409244,0.03125],'Relief','default','SliderStep',[0.01,0.1],'String','Sensor 1','Style','text','Value',[0],'VerticalAlignment','middle','Visible','on','Tag','sensor1','Callback','')
handles.sensor2=uicontrol(f,'unit','normalized','BackgroundColor',[-1,-1,-1],'Enable','on','FontAngle','normal','FontName','Candara','FontSize',[14],'FontUnits','points','FontWeight','normal','ForegroundColor',[-1,-1,-1],'HorizontalAlignment','left','ListboxTop',[],'Max',[1],'Min',[0],'Position',[0.0407563,0.6625,0.0409244,0.03125],'Relief','default','SliderStep',[0.01,0.1],'String','Sensor 2','Style','text','Value',[0],'VerticalAlignment','middle','Visible','on','Tag','sensor2','Callback','')
handles.sensor3=uicontrol(f,'unit','normalized','BackgroundColor',[-1,-1,-1],'Enable','on','FontAngle','normal','FontName','Candara','FontSize',[14],'FontUnits','points','FontWeight','normal','ForegroundColor',[-1,-1,-1],'HorizontalAlignment','left','ListboxTop',[],'Max',[1],'Min',[0],'Position',[0.6554622,0.6683333,0.0409244,0.03125],'Relief','default','SliderStep',[0.01,0.1],'String','Sensor 3','Style','text','Value',[0],'VerticalAlignment','middle','Visible','on','Tag','sensor3','Callback','')
handles.sensor4=uicontrol(f,'unit','normalized','BackgroundColor',[-1,-1,-1],'Enable','on','FontAngle','normal','FontName','Candara','FontSize',[14],'FontUnits','points','FontWeight','normal','ForegroundColor',[-1,-1,-1],'HorizontalAlignment','left','ListboxTop',[],'Max',[1],'Min',[0],'Position',[0.0371429,0.30375,0.0409244,0.03125],'Relief','default','SliderStep',[0.01,0.1],'String','Sensor 4','Style','text','Value',[0],'VerticalAlignment','middle','Visible','on','Tag','sensor4','Callback','')
handles.sensor5=uicontrol(f,'unit','normalized','BackgroundColor',[-1,-1,-1],'Enable','on','FontAngle','normal','FontName','Candara','FontSize',[14],'FontUnits','points','FontWeight','normal','ForegroundColor',[-1,-1,-1],'HorizontalAlignment','left','ListboxTop',[],'Max',[1],'Min',[0],'Position',[0.6566387,0.3004167,0.0409244,0.03125],'Relief','default','SliderStep',[0.01,0.1],'String','Sensor 5','Style','text','Value',[0],'VerticalAlignment','middle','Visible','on','Tag','sensor5','Callback','')
handles.sens1= newaxes();handles.sens1.margins = [ 0 0 0 0];handles.sens1.axes_bounds = [0.3138655,0.2145833,0.1714286,0.2870833];
handles.sens2= newaxes();handles.sens2.margins = [ 0 0 0 0];handles.sens2.axes_bounds = [0.1063866,0.2879167,0.1498319,0.26375];
handles.sens3= newaxes();handles.sens3.margins = [ 0 0 0 0];handles.sens3.axes_bounds = [0.719916,0.2920833,0.1637815,0.28125];
handles.sens4= newaxes();handles.sens4.margins = [ 0 0 0 0];handles.sens4.axes_bounds = [0.1063025,0.6475,0.142437,0.28875];
handles.sens5= newaxes();handles.sens5.margins = [ 0 0 0 0];handles.sens5.axes_bounds = [0.719916,0.6875,0.1563025,0.2975];


f.visible = "on";


//////////
// Callbacks are defined as below. Please do not delete the comments as it will be used in coming version
//////////


function start_callback(handles)
//Write your callback for  start  here

endfunction


function quit_callback(handles)
//Write your callback for  quit  here

endfunction


