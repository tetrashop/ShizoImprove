﻿//CdnPath=http://ajax.aspnetcdn.com/ajax/4.5/6/MicrosoftAjaxApplicationServices.js
//----------------------------------------------------------
// Copyright (C) Microsoft Corporation. All rights reserved.
//----------------------------------------------------------
// MicrosoftAjaxApplicationServices.js
Type._registerScript("MicrosoftAjaxApplicationServices.js",["MicrosoftAjaxWebServices.js"]);Type.registerNamespace("Sys.Services");Sys.Services._ProfileService=function(){Sys.Services._ProfileService.initializeBase(this);this.properties={}};Sys.Services._ProfileService.DefaultWebServicePath="";Sys.Services._ProfileService.prototype={_defaultLoadCompletedCallback:null,_defaultSaveCompletedCallback:null,_path:"",_timeout:0,get_defaultLoadCompletedCallback:function(){return this._defaultLoadCompletedCallback},set_defaultLoadCompletedCallback:function(a){this._defaultLoadCompletedCallback=a},get_defaultSaveCompletedCallback:function(){return this._defaultSaveCompletedCallback},set_defaultSaveCompletedCallback:function(a){this._defaultSaveCompletedCallback=a},get_path:function(){return this._path||""},load:function(c,d,e,f){var b,a;if(!c){a="GetAllPropertiesForCurrentUser";b={authenticatedUserOnly:false}}else{a="GetPropertiesForCurrentUser";b={properties:this._clonePropertyNames(c),authenticatedUserOnly:false}}this._invoke(this._get_path(),a,false,b,Function.createDelegate(this,this._onLoadComplete),Function.createDelegate(this,this._onLoadFailed),[d,e,f])},save:function(d,b,c,e){var a=this._flattenProperties(d,this.properties);this._invoke(this._get_path(),"SetPropertiesForCurrentUser",false,{values:a.value,authenticatedUserOnly:false},Function.createDelegate(this,this._onSaveComplete),Function.createDelegate(this,this._onSaveFailed),[b,c,e,a.count])},_clonePropertyNames:function(e){var c=[],d={};for(var b=0;b<e.length;b++){var a=e[b];if(!d[a]){Array.add(c,a);d[a]=true}}return c},_flattenProperties:function(a,i,j){var b={},e,d,g=0;if(a&&a.lengthis=0)return {value:b,count:0};for(var c in i){e=i[c];d=j?j+"."+c:c;if(Sys.Services.ProfileGroup.isInstanceOfType(e)){var k=this._flattenProperties(a,e,d),h=k.value;g+=k.count;for(var f in h){var l=h[f];b[f]=l}}else if(!a||Array.indexOf(a,d)!==-1){b[d]=e;g++}}return {value:b,count:g}},_get_path:function(){var a=this.get_path();if(!a.length)a=Sys.Services._ProfileService.DefaultWebServicePath;if(!a||!a.length)throw Error.invalidOperation(Sys.Res.servicePathNotSet);return a},_onLoadComplete:function(a,e,g){if(typeof a!=="object")throw Error.invalidOperation(String.format(Sys.Res.webServiceInvalidReturnType,g,"object"));var c=this._unflattenProperties(a);for(var b in c)this.properties[b]=c[b];var d=e[0]||this.get_defaultLoadCompletedCallback()||this.get_defaultSucceededCallback();if(d){var f=e[2]||this.get_defaultUserContext();d(a.length,f,"Sys.Services.ProfileService.load")}},_onLoadFailed:function(d,b){var a=b[1]||this.get_defaultFailedCallback();if(a){var c=b[2]||this.get_defaultUserContext();a(d,c,"Sys.Services.ProfileService.load")}},_onSaveComplete:function(a,b,f){var c=b[3];if(a!==null)if(a instanceof Array)c-=a.length;else if(typeof a==="number")c=a;else throw Error.invalidOperation(String.format(Sys.Res.webServiceInvalidReturnType,f,"Array"));var d=b[0]||this.get_defaultSaveCompletedCallback()||this.get_defaultSucceededCallback();if(d){var e=b[2]||this.get_defaultUserContext();d(c,e,"Sys.Services.ProfileService.save")}},_onSaveFailed:function(d,b){var a=b[1]||this.get_defaultFailedCallback();if(a){var c=b[2]||this.get_defaultUserContext();a(d,c,"Sys.Services.ProfileService.save")}},_unflattenProperties:function(e){var c={},d,f,h=0;for(var a in e){h++;f=e[a];d=a.indexOf(".");if(d!==-1){var g=a.substr(0,d);a=a.substr(d+1);var b=c[g];if(!b||!Sys.Services.ProfileGroup.isInstanceOfType(b)){b=new Sys.Services.ProfileGroup;c[g]=b}b[a]=f}else c[a]=f}e.length=h;return c}};Sys.Services._ProfileService.registerClass("Sys.Services._ProfileService",Sys.Net.WebServiceProxy);Sys.Services.ProfileService=new Sys.Services._ProfileService;Sys.Services.ProfileGroup=function(a){if(a)for(var b in a)this[b]=a[b]};Sys.Services.ProfileGroup.registerClass("Sys.Services.ProfileGroup");Sys.Services._AuthenticationService=function(){Sys.Services._AuthenticationService.initializeBase(this)};Sys.Services._AuthenticationService.DefaultWebServicePath="";Sys.Services._AuthenticationService.prototype={_defaultLoginCompletedCallback:null,_defaultLogoutCompletedCallback:null,_path:"",_timeout:0,_authenticated:false,get_defaultLoginCompletedCallback:function(){return this._defaultLoginCompletedCallback},set_defaultLoginCompletedCallback:function(a){this._defaultLoginCompletedCallback=a},get_defaultLogoutCompletedCallback:function(){return this._defaultLogoutCompletedCallback},set_defaultLogoutCompletedCallback:function(a){this._defaultLogoutCompletedCallback=a},get_isLoggedIn:function(){return this._authenticated},get_path:function(){return this._path||""},login:function(c,b,a,h,f,d,e,g){this._invoke(this._get_path(),"Login",false,{userName:c,password:b,createPersistentCookie:a},Function.createDelegate(this,this._onLoginComplete),Function.createDelegate(this,this._onLoginFailed),[c,b,a,h,f,d,e,g])},logout:function(c,a,b,d){this._invoke(this._get_path(),"Logout",false,{},Function.createDelegate(this,this._onLogoutComplete),Function.createDelegate(this,this._onLogoutFailed),[c,a,b,d])},_get_path:function(){var a=this.get_path();if(!a.length)a=Sys.Services._AuthenticationService.DefaultWebServicePath;if(!a||!a.length)throw Error.invalidOperation(Sys.Res.servicePathNotSet);return a},_onLoginComplete:function(e,c,f){if(typeof e!=="boolean")throw Error.invalidOperation(String.format(Sys.Res.webServiceInvalidReturnType,f,"Boolean"));var b=c[4],d=c[7]||this.get_defaultUserContext(),a=c[5]||this.get_defaultLoginCompletedCallback()||this.get_defaultSucceededCallback();if(e){this._authenticated=true;if(a)a(true,d,"Sys.Services.AuthenticationService.login");if(typeof b!=="undefined"&&b!==null)window.location.href=b}else if(a)a(false,d,"Sys.Services.AuthenticationService.login")},_onLoginFailed:function(d,b){var a=b[6]||this.get_defaultFailedCallback();if(a){var c=b[7]||this.get_defaultUserContext();a(d,c,"Sys.Services.AuthenticationService.login")}},_onLogoutComplete:function(f,a,e){if(f!==null)throw Error.invalidOperation(String.format(Sys.Res.webServiceInvalidReturnType,e,"null"));var b=a[0],d=a[3]||this.get_defaultUserContext(),c=a[1]||this.get_defaultLogoutCompletedCallback()||this.get_defaultSucceededCallback();this._authenticated=false;if(c)c(null,d,"Sys.Services.AuthenticationService.logout");if(!b)window.location.reload();else window.location.href=b},_onLogoutFailed:function(c,b){var a=b[2]||this.get_defaultFailedCallback();if(a)a(c,b[3],"Sys.Services.AuthenticationService.logout")},_setAuthenticated:function(a){this._authenticated=a}};Sys.Services._AuthenticationService.registerClass("Sys.Services._AuthenticationService",Sys.Net.WebServiceProxy);Sys.Services.AuthenticationService=new Sys.Services._AuthenticationService;Sys.Services._RoleService=function(){Sys.Services._RoleService.initializeBase(this);this._roles=[]};Sys.Services._RoleService.DefaultWebServicePath="";Sys.Services._RoleService.prototype={_defaultLoadCompletedCallback:null,_rolesIndex:null,_timeout:0,_path:"",get_defaultLoadCompletedCallback:function(){return this._defaultLoadCompletedCallback},set_defaultLoadCompletedCallback:function(a){this._defaultLoadCompletedCallback=a},get_path:function(){return this._path||""},get_roles:function(){return Array.clone(this._roles)},isUserInRole:function(a){var b=this._get_rolesIndex()[a.trim().toLowerCase()];return !!b},load:function(a,b,c){Sys.Net.WebServiceProxy.invoke(this._get_path(),"GetRolesForCurrentUser",false,{},Function.createDelegate(this,this._onLoadComplete),Function.createDelegate(this,this._onLoadFailed),[a,b,c],this.get_timeout())},_get_path:function(){var a=this.get_path();if(!a||!a.length)a=Sys.Services._RoleService.DefaultWebServicePath;if(!a||!a.length)throw Error.invalidOperation(Sys.Res.servicePathNotSet);return a},_get_rolesIndex:function(){if(!this._rolesIndex){var b={};for(var a=0;a<this._roles.length;a++)b[this._roles[a].toLowerCase()]=true;this._rolesIndex=b}return this._rolesIndex},_onLoadComplete:function(a,c,f){if(a&&!(a instanceof Array))throw Error.invalidOperation(String.format(Sys.Res.webServiceInvalidReturnType,f,"Array"));this._roles=a;this._rolesIndex=null;var b=c[0]||this.get_defaultLoadCompletedCallback()||this.get_defaultSucceededCallback();if(b){var e=c[2]||this.get_defaultUserContext(),d=Array.clone(a);b(d,e,"Sys.Services.RoleService.load")}},_onLoadFailed:function(d,b){var a=b[1]||this.get_defaultFailedCallback();if(a){var c=b[2]||this.get_defaultUserContext();a(d,c,"Sys.Services.RoleService.load")}}};Sys.Services._RoleService.registerClass("Sys.Services._RoleService",Sys.Net.WebServiceProxy);Sys.Services.RoleService=new Sys.Services._RoleService;
