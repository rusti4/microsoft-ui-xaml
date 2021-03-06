﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           7.0.0-build.57+g2cc4f0c931
//       
//       Command:
//           LottieGen -Language Cppwinrt -InputFile Controls_07_Settings.json
//       
//       Input file:
//           Controls_07_Settings.json (5280 bytes created 18:13-08:00 Nov 19 2020)
//       
//       LottieGen source:
//           http://aka.ms/Lottie
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// ____________________________________
// |       Object stats       | Count |
// |__________________________|_______|
// | All CompositionObjects   |    27 |
// |--------------------------+-------|
// | Expression animators     |     2 |
// | KeyFrame animators       |     1 |
// | Reference parameters     |     2 |
// | Expression operations    |     4 |
// |--------------------------+-------|
// | Animated brushes         |     1 |
// | Animated gradient stops  |     - |
// | ExpressionAnimations     |     2 |
// | PathKeyFrameAnimations   |     - |
// |--------------------------+-------|
// | ContainerVisuals         |     1 |
// | ShapeVisuals             |     1 |
// |--------------------------+-------|
// | ContainerShapes          |     - |
// | CompositionSpriteShapes  |     1 |
// |--------------------------+-------|
// | Brushes                  |     1 |
// | Gradient stops           |     - |
// | CompositionVisualSurface |     - |
// ------------------------------------
#include "pch.h"
#include "Controls_07_Settings.h"
#include <winrt/Windows.Foundation.Metadata.h>
#include <winrt/Windows.UI.Composition.h>
#include "d2d1.h"
#include <d2d1_1.h>
#include <d2d1helper.h>
#include <Windows.Graphics.Interop.h>
#include <winrt/Windows.Graphics.Effects.h>

using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Numerics;
using namespace winrt::Windows::Graphics;
using namespace winrt::Windows::UI;
using namespace winrt::Windows::UI::Composition;
using TimeSpan = winrt::Windows::Foundation::TimeSpan;

namespace winrt::Microsoft::UI::Xaml::Controls::AnimatedVisuals
{
    CppWinRTActivatableClassWithBasicFactory(Controls_07_Settings)
}
#include "AnimatedVisuals\Controls_07_Settings.g.cpp"

class CanvasGeometry : public winrt::implements<CanvasGeometry,
    IGeometrySource2D,
    Windows::Graphics::IGeometrySource2DInterop>
{
    winrt::com_ptr<ID2D1Geometry> _geometry{ nullptr };

public:
    CanvasGeometry(winrt::com_ptr<ID2D1Geometry> geometry)
        : _geometry{ geometry }
    { }

    // IGeometrySource2D.
    winrt::com_ptr<ID2D1Geometry> Geometry() { return _geometry; }

    // IGeometrySource2DInterop.
    IFACEMETHODIMP GetGeometry(ID2D1Geometry** value) override
    {
        _geometry.copy_to(value);
        return S_OK;
    }

    // IGeometrySource2DInterop.
    IFACEMETHODIMP TryGetGeometryUsingFactory(ID2D1Factory*, ID2D1Geometry**) override
    {
        return E_NOTIMPL;
    }
};
class Controls_07_Settings_AnimatedVisual : public winrt::implements<Controls_07_Settings_AnimatedVisual,
        winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual,
        IClosable>
{
    winrt::com_ptr<ID2D1Factory> _d2dFactory{ nullptr };
    static constexpr int64_t c_durationTicks{ 10000000L };
    Compositor const _c{ nullptr };
    ExpressionAnimation const _reusableExpressionAnimation{ nullptr };
    CompositionPropertySet const _themeProperties{ nullptr };
    ContainerVisual _root{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_0{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_1{ nullptr };

    void BindProperty(
        CompositionObject target,
        winrt::hstring animatedPropertyName,
        winrt::hstring expression,
        winrt::hstring referenceParameterName,
        CompositionObject referencedObject)
    {
        _reusableExpressionAnimation.ClearAllParameters();
        _reusableExpressionAnimation.Expression(expression);
        _reusableExpressionAnimation.SetReferenceParameter(referenceParameterName, referencedObject);
        target.StartAnimation(animatedPropertyName, _reusableExpressionAnimation);
    }

    ScalarKeyFrameAnimation CreateScalarKeyFrameAnimation(float initialProgress, float initialValue, CompositionEasingFunction initialEasingFunction)
    {
        const auto result = _c.CreateScalarKeyFrameAnimation();
        result.Duration(TimeSpan{ c_durationTicks });
        result.InsertKeyFrame(initialProgress, initialValue, initialEasingFunction);
        return result;
    }

    // - - - Shape tree root for layer: Gear
    // - - ShapeGroup: 🎨-Color
    // - Path 4+Path 3+Path 2+Path 1.PathGeometry
    winrt::com_ptr<CanvasGeometry> Geometry_0()
    {
        winrt::com_ptr<ID2D1Geometry> geometries[4]
        {
            Geometry_1().get()->Geometry(),
            Geometry_2().get()->Geometry(),
            Geometry_3().get()->Geometry(),
            Geometry_4().get()->Geometry(),
        };
        winrt::com_ptr<ID2D1GeometryGroup> group{ nullptr };
        winrt::check_hresult(_d2dFactory->CreateGeometryGroup(
            D2D1_FILL_MODE_WINDING,
            (ID2D1Geometry**)(&geometries),
            4,
            group.put()));
        auto result = winrt::make_self<CanvasGeometry>(group);
        return result;
    }

    // - - - - Shape tree root for layer: Gear
    // - - - ShapeGroup: 🎨-Color
    // - - Path 4+Path 3+Path 2+Path 1.PathGeometry
    winrt::com_ptr<CanvasGeometry> Geometry_1()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ 0.0390000008F, -32.5F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddBezier({ { 2.58699989F, -32.4720001F }, { 5.125F, -32.1899986F }, { 7.61199999F, -31.6569996F } });
        sink->AddBezier({ { 8.69799995F, -31.4249992F }, { 9.51000023F, -30.5550003F }, { 9.63300037F, -29.493F } });
        sink->AddLine({ 10.224F, -24.4039993F });
        sink->AddBezier({ { 10.4910002F, -22.0669994F }, { 12.5459995F, -20.2970009F }, { 14.9960003F, -20.2950001F } });
        sink->AddBezier({ { 15.6540003F, -20.2940006F }, { 16.3059998F, -20.4260006F }, { 16.9139996F, -20.684F } });
        sink->AddLine({ 21.7759991F, -22.7350006F });
        sink->AddBezier({ { 22.7870007F, -23.1620007F }, { 23.9689999F, -22.9290009F }, { 24.7240009F, -22.1550007F } });
        sink->AddBezier({ { 28.2380009F, -18.552F }, { 30.8549995F, -14.2299995F }, { 32.3779984F, -9.51500034F } });
        sink->AddBezier({ { 32.7060013F, -8.49800014F }, { 32.3279991F, -7.39400005F }, { 31.4360008F, -6.76200008F } });
        sink->AddLine({ 27.1259995F, -3.71099997F });
        sink->AddBezier({ { 25.8969994F, -2.8440001F }, { 25.1709995F, -1.46700001F }, { 25.1709995F, -0.00200000009F } });
        sink->AddBezier({ { 25.1709995F, 1.46300006F }, { 25.8969994F, 2.84100008F }, { 27.1289997F, 3.71000004F } });
        sink->AddLine({ 31.4419994F, 6.76100016F });
        sink->AddBezier({ { 32.3349991F, 7.3920002F }, { 32.7130013F, 8.49699974F }, { 32.3849983F, 9.51399994F } });
        sink->AddBezier({ { 30.8619995F, 14.2279997F }, { 28.2469997F, 18.5499992F }, { 24.7350006F, 22.1539993F } });
        sink->AddBezier({ { 23.9810009F, 22.9279995F }, { 22.7999992F, 23.1609993F }, { 21.7889996F, 22.7360001F } });
        sink->AddLine({ 16.9069996F, 20.6819992F });
        sink->AddBezier({ { 15.5100002F, 20.0949993F }, { 13.9060001F, 20.1809998F }, { 12.5860004F, 20.9130001F } });
        sink->AddBezier({ { 11.2659998F, 21.6450005F }, { 10.3879995F, 22.9379997F }, { 10.2200003F, 24.3929996F } });
        sink->AddLine({ 9.63300037F, 29.4820004F });
        sink->AddBezier({ { 9.51200008F, 30.5310001F }, { 8.71800041F, 31.3939991F }, { 7.64799976F, 31.6380005F } });
        sink->AddBezier({ { 2.61999989F, 32.7869987F }, { -2.61999989F, 32.7869987F }, { -7.64799976F, 31.6380005F } });
        sink->AddBezier({ { -8.71800041F, 31.3939991F }, { -9.51200008F, 30.5310001F }, { -9.63300037F, 29.4820004F } });
        sink->AddLine({ -10.2189999F, 24.3999996F });
        sink->AddBezier({ { -10.3909998F, 22.948F }, { -11.2709999F, 21.6599998F }, { -12.5900002F, 20.9300003F } });
        sink->AddBezier({ { -13.9090004F, 20.2000008F }, { -15.5100002F, 20.1140003F }, { -16.9020004F, 20.698F } });
        sink->AddLine({ -21.7849998F, 22.7520008F });
        sink->AddBezier({ { -22.7959995F, 23.177F }, { -23.9780006F, 22.9440002F }, { -24.7320004F, 22.1700001F } });
        sink->AddBezier({ { -28.2460003F, 18.5620003F }, { -30.8610001F, 14.2349997F }, { -32.382F, 9.51599979F } });
        sink->AddBezier({ { -32.7089996F, 8.5F }, { -32.3310013F, 7.39499998F }, { -31.4389992F, 6.76399994F } });
        sink->AddLine({ -27.1219997F, 3.71099997F });
        sink->AddBezier({ { -25.8929996F, 2.8440001F }, { -25.1669998F, 1.46700001F }, { -25.1669998F, 0.00200000009F } });
        sink->AddBezier({ { -25.1669998F, -1.46300006F }, { -25.8929996F, -2.84100008F }, { -27.1240005F, -3.70900011F } });
        sink->AddLine({ -31.4379997F, -6.75699997F });
        sink->AddBezier({ { -32.3310013F, -7.38800001F }, { -32.7099991F, -8.49400043F }, { -32.3810005F, -9.51099968F } });
        sink->AddBezier({ { -30.8579998F, -14.2259998F }, { -28.2409992F, -18.5480003F }, { -24.7269993F, -22.1509991F } });
        sink->AddBezier({ { -23.9720001F, -22.9249992F }, { -22.7900009F, -23.1580009F }, { -21.7789993F, -22.7310009F } });
        sink->AddLine({ -16.9179993F, -20.6809998F });
        sink->AddBezier({ { -15.5190001F, -20.0919991F }, { -13.9110003F, -20.1800003F }, { -12.585F, -20.9239998F } });
        sink->AddBezier({ { -11.2650003F, -21.6590004F }, { -10.3859997F, -22.9529991F }, { -10.2159996F, -24.4080009F } });
        sink->AddLine({ -9.6260004F, -29.493F });
        sink->AddBezier({ { -9.50300026F, -30.5550003F }, { -8.68900013F, -31.4249992F }, { -7.60300016F, -31.6569996F } });
        sink->AddBezier({ { -5.11299992F, -32.1889992F }, { -2.57200003F, -32.4710007F }, { 0.0390000008F, -32.5F } });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    // - - - - Shape tree root for layer: Gear
    // - - - ShapeGroup: 🎨-Color
    // - - Path 4+Path 3+Path 2+Path 1.PathGeometry
    winrt::com_ptr<CanvasGeometry> Geometry_2()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ 0.0390000008F, -27.5F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddBezier({ { -1.53699994F, -27.4820004F }, { -3.10899997F, -27.3519993F }, { -4.66300011F, -27.1100006F } });
        sink->AddLine({ -5.04099989F, -23.8530006F });
        sink->AddBezier({ { -5.39499998F, -20.8209991F }, { -7.22399998F, -18.1299992F }, { -9.96500015F, -16.6030006F } });
        sink->AddBezier({ { -12.7229996F, -15.0559998F }, { -16.0860004F, -14.8699999F }, { -19.0119991F, -16.1030006F } });
        sink->AddLine({ -22.1299992F, -17.4179993F });
        sink->AddBezier({ { -24.1149998F, -15.1040001F }, { -25.6959991F, -12.4949999F }, { -26.809F, -9.69400024F } });
        sink->AddLine({ -24.0389996F, -7.73699999F });
        sink->AddBezier({ { -21.4740009F, -5.92799997F }, { -19.9599991F, -3.0539999F }, { -19.9599991F, 0.00200000009F } });
        sink->AddBezier({ { -19.9599991F, 3.05800009F }, { -21.4740009F, 5.93100023F }, { -24.0359993F, 7.73899984F } });
        sink->AddLine({ -26.8099995F, 9.70100021F });
        sink->AddBezier({ { -25.698F, 12.507F }, { -24.118F, 15.1210003F }, { -22.1310005F, 17.4389992F } });
        sink->AddLine({ -18.9890003F, 16.1170006F });
        sink->AddBezier({ { -16.0799999F, 14.8970003F }, { -12.7390003F, 15.0760002F }, { -9.98900032F, 16.5979996F } });
        sink->AddBezier({ { -7.23899984F, 18.1200008F }, { -5.40399981F, 20.8059998F }, { -5.04400015F, 23.8419991F } });
        sink->AddLine({ -4.66599989F, 27.1219997F });
        sink->AddBezier({ { -1.57799995F, 27.6259995F }, { 1.57799995F, 27.6259995F }, { 4.66599989F, 27.1219997F } });
        sink->AddLine({ 5.04400015F, 23.8419991F });
        sink->AddBezier({ { 5.39400005F, 20.8069992F }, { 7.22700024F, 18.1119995F }, { 9.98099995F, 16.5839996F } });
        sink->AddBezier({ { 12.7349997F, 15.0559998F }, { 16.0799999F, 14.8769999F }, { 18.9950008F, 16.1019993F } });
        sink->AddLine({ 22.1350002F, 17.4220009F });
        sink->AddBezier({ { 24.1200008F, 15.1070004F }, { 25.7000008F, 12.4989996F }, { 26.8129997F, 9.69699955F } });
        sink->AddLine({ 24.0429993F, 7.73699999F });
        sink->AddBezier({ { 21.4780006F, 5.92799997F }, { 19.9629993F, 3.0539999F }, { 19.9629993F, -0.00200000009F } });
        sink->AddBezier({ { 19.9629993F, -3.05800009F }, { 21.4780006F, -5.93100023F }, { 24.0400009F, -7.73799992F } });
        sink->AddLine({ 26.8059998F, -9.6960001F });
        sink->AddBezier({ { 25.6930008F, -12.4980001F }, { 24.1130009F, -15.1070004F }, { 22.1270008F, -17.4209995F } });
        sink->AddLine({ 19.0149994F, -16.1089993F });
        sink->AddBezier({ { 17.7469997F, -15.5699997F }, { 16.375F, -15.2930002F }, { 14.9890003F, -15.2950001F } });
        sink->AddBezier({ { 9.88700008F, -15.3000002F }, { 5.60500002F, -18.9880009F }, { 5.04799986F, -23.8540001F } });
        sink->AddLine({ 4.67000008F, -27.1110001F });
        sink->AddBezier({ { 3.12299991F, -27.3530006F }, { 1.56700003F, -27.4829998F }, { 0.0390000008F, -27.5F } });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    // - - - - Shape tree root for layer: Gear
    // - - - ShapeGroup: 🎨-Color
    // - - Path 4+Path 3+Path 2+Path 1.PathGeometry
    winrt::com_ptr<CanvasGeometry> Geometry_3()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ -0.00499999989F, -12.5F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddBezier({ { 7.18499994F, -12.5F }, { 13.0139999F, -6.90399981F }, { 13.0139999F, 0.0F } });
        sink->AddBezier({ { 13.0139999F, 6.90399981F }, { 7.18499994F, 12.5F }, { -0.00499999989F, 12.5F } });
        sink->AddBezier({ { -7.19500017F, 12.5F }, { -13.0229998F, 6.90399981F }, { -13.0229998F, 0.0F } });
        sink->AddBezier({ { -13.0229998F, -6.90399981F }, { -7.19500017F, -12.5F }, { -0.00499999989F, -12.5F } });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    // - - - - Shape tree root for layer: Gear
    // - - - ShapeGroup: 🎨-Color
    // - - Path 4+Path 3+Path 2+Path 1.PathGeometry
    winrt::com_ptr<CanvasGeometry> Geometry_4()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ -0.00499999989F, -7.5F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddBezier({ { -4.31899977F, -7.5F }, { -7.81500006F, -4.1420002F }, { -7.81500006F, 0.0F } });
        sink->AddBezier({ { -7.81500006F, 4.1420002F }, { -4.31899977F, 7.5F }, { -0.00499999989F, 7.5F } });
        sink->AddBezier({ { 4.30900002F, 7.5F }, { 7.80600023F, 4.1420002F }, { 7.80600023F, 0.0F } });
        sink->AddBezier({ { 7.80600023F, -4.1420002F }, { 4.30900002F, -7.5F }, { -0.00499999989F, -7.5F } });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    // - Shape tree root for layer: Gear
    // ShapeGroup: 🎨-Color
    // Color bound to theme property value: Foreground
    CompositionColorBrush ThemeColor_Foreground()
    {
        const auto result = _c.CreateColorBrush();
        BindProperty(result, L"Color", L"ColorRGB(_theme.Foreground.W*1,_theme.Foreground.X,_theme.Foreground.Y,_theme.Foreground.Z)", L"_theme", _themeProperties);
        return result;
    }

    // - Shape tree root for layer: Gear
    // ShapeGroup: 🎨-Color
    // Path 4+Path 3+Path 2+Path 1.PathGeometry
    CompositionPathGeometry PathGeometry()
    {
        return _c.CreatePathGeometry(CompositionPath(CanvasGeometryToIGeometrySource2D(Geometry_0())));
    }

    // Shape tree root for layer: Gear
    // Path 4+Path 3+Path 2+Path 1
    CompositionSpriteShape SpriteShape()
    {
        const auto result = _c.CreateSpriteShape(PathGeometry());
        result.Offset({ 35.0F, 35.0F });
        result.FillBrush(ThemeColor_Foreground());
        result.StartAnimation(L"RotationAngleInDegrees", RotationAngleInDegreesScalarAnimation_0_to_0());
        const auto controller = result.TryGetAnimationController(L"RotationAngleInDegrees");
        controller.Pause();
        BindProperty(controller, L"Progress", L"_.Progress", L"_", _root);
        return result;
    }

    // The root of the composition.
    ContainerVisual Root()
    {
        const auto result = _root = _c.CreateContainerVisual();
        const auto propertySet = result.Properties();
        propertySet.InsertScalar(L"Progress", 0.0F);
        // Shape tree root for layer: Gear
        result.Children().InsertAtTop(ShapeVisual_0());
        return result;
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_0()
    {
        return _cubicBezierEasingFunction_0 = _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.166999996F }, { 0.0F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_1()
    {
        return _cubicBezierEasingFunction_1 = _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.0F }, { 0.833000004F, 1.0F });
    }

    // - Shape tree root for layer: Gear
    // ShapeGroup: 🎨-Color
    // Rotation
    ScalarKeyFrameAnimation RotationAngleInDegreesScalarAnimation_0_to_0()
    {
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 0.0F, HoldThenStepEasingFunction());
        result.InsertKeyFrame(0.25F, -15.0F, CubicBezierEasingFunction_0());
        result.InsertKeyFrame(0.333333343F, -15.0F, _c.CreateCubicBezierEasingFunction({ 0.0F, 0.0F }, { 0.833000004F, 1.0F }));
        result.InsertKeyFrame(0.5F, 95.0F, CubicBezierEasingFunction_1());
        result.InsertKeyFrame(0.816666663F, 90.0F, _cubicBezierEasingFunction_1);
        result.InsertKeyFrame(0.833333313F, 90.0F, _cubicBezierEasingFunction_1);
        result.InsertKeyFrame(0.983333349F, 0.0F, _cubicBezierEasingFunction_0);
        return result;
    }

    // Shape tree root for layer: Gear
    ShapeVisual ShapeVisual_0()
    {
        const auto result = _c.CreateShapeVisual();
        result.Size({ 70.0F, 70.0F });
        // ShapeGroup: 🎨-Color
        result.Shapes().Append(SpriteShape());
        return result;
    }

    // - - Shape tree root for layer: Gear
    // - ShapeGroup: 🎨-Color
    // RotationAngleInDegrees
    StepEasingFunction HoldThenStepEasingFunction()
    {
        const auto result = _c.CreateStepEasingFunction();
        result.IsFinalStepSingleFrame(true);
        return result;
    }

    static IGeometrySource2D CanvasGeometryToIGeometrySource2D(winrt::com_ptr<CanvasGeometry> geo)
    {
        return geo.as<IGeometrySource2D>();
    }

public:
    Controls_07_Settings_AnimatedVisual(
        Compositor compositor,
        CompositionPropertySet themeProperties)
        : _c{compositor}
        , _themeProperties{themeProperties}
        , _reusableExpressionAnimation(compositor.CreateExpressionAnimation())
    {
        winrt::check_hresult(D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, _d2dFactory.put()));
        const auto _ = Root();
    }

    void Close()
    {
        if (_root)
        {
            _root.Close();
        }
    }

    TimeSpan Duration() const
    {
        return TimeSpan{ c_durationTicks };
    }

    Visual RootVisual() const
    {
        return _root;
    }

    winrt::float2 Size() const
    {
        return { 70.0F, 70.0F };
    }

    static bool IsRuntimeCompatible()
    {
        return winrt::Windows::Foundation::Metadata::ApiInformation::IsApiContractPresent(L"Windows.Foundation.UniversalApiContract", 7);
    }
};

winrt::float4 Controls_07_Settings::ColorAsVector4(Color color)
{
    return { static_cast<float>(color.R), static_cast<float>(color.G), static_cast<float>(color.B), static_cast<float>(color.A) };
}

CompositionPropertySet Controls_07_Settings::EnsureThemeProperties(Compositor compositor)
{
    if (_themeProperties == nullptr)
    {
        _themeProperties = compositor.CreatePropertySet();
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }

    return _themeProperties;
}

Color Controls_07_Settings::Foreground()
{
    return _themeForeground;
}

void Controls_07_Settings::Foreground(Color value)
{
    _themeForeground = value;
    if (_themeProperties != nullptr)
    {
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }
}

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual Controls_07_Settings::TryCreateAnimatedVisual(
    Compositor const& compositor,
    IInspectable& diagnostics)
{
    const auto _ = EnsureThemeProperties(compositor);
    diagnostics = nullptr;

    if (Controls_07_Settings_AnimatedVisual::IsRuntimeCompatible())
    {
        return winrt::make<Controls_07_Settings_AnimatedVisual>(
            compositor,
            _themeProperties);
    }

    return nullptr;
}

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual Controls_07_Settings::TryCreateAnimatedIconVisual(
    Compositor const& compositor)
{
    IInspectable diagnostics;
    return TryCreateAnimatedVisual(compositor, diagnostics);
}

double Controls_07_Settings::FrameToProgress(double frameNumber)
{
    return frameNumber / 60.0;
}

winrt::Windows::Foundation::Collections::IMapView<hstring, double> Controls_07_Settings::Markers()
{
    return winrt::single_threaded_map<winrt::hstring, double>(
        std::map<winrt::hstring, double>
        {
            { L"NormalToHover_Start", 0.0 },
            { L"NormalToHover_End", 0.303 },
            { L"NormalToPressed_Start", 0.0 },
            { L"NormalToPressed_End", 0.810 },
            { L"HoverToNormal_Start", 0.303 },
            { L"HoverToNormal_End", 0.0 },
            { L"HoverToPressed_Start", 0.303 },
            { L"HoverToPressed_End", 0.810 },
            { L"PressedToNormal_Start", 0.810 },
            { L"PressedToNormal_End", 1.0 },
            { L"PressedToHover_Start", 0.810 },
            { L"PressedToHover_End", 0.303 },
        }
    ).GetView();
}

void Controls_07_Settings::SetColorProperty(hstring const& propertyName, Color value)
{
    if (propertyName == L"Foreground")
    {
        _themeForeground = value;
    }
    else
    {
        return;
    }

    if (_themeProperties != nullptr)
    {
        _themeProperties.InsertVector4(propertyName, ColorAsVector4(value));
    }
}

void Controls_07_Settings::SetScalarProperty(hstring const&, double)
{
}
