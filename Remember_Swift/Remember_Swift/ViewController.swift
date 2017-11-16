//
//  ViewController.swift
//  Remember_Swift
//
//  Created by hjk on 2017/11/15.
//  Copyright © 2017年 kobehjk. All rights reserved.
//

import UIKit

class ViewController: GLIRViewController {

    lazy var clockView = CCDateView.init(frame: CGRect.init(x: 0, y: 0, width: SCREENH, height:SCREENW ))
    
    override func viewDidLoad() {
        self.rippleImageName = #imageLiteral(resourceName: "星空23")
        super.viewDidLoad()
        view.backgroundColor = UIColor.white
        initNotification()
        initGesture()
        initView()
    }

    override func viewDidAppear(_ animated: Bool) {
        clockView.alpha = 0
    }
    
    func initNotification() {
        UIDevice.current.beginGeneratingDeviceOrientationNotifications()
        NotificationCenter.default.addObserver(self, selector: #selector(handleDeviceOrientationDidChange(interfaceOrientation:)), name: NSNotification.Name.UIDeviceOrientationDidChange, object: nil)
        
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }

    deinit {
        NotificationCenter.default.removeObserver(self, name: NSNotification.Name.UIDeviceOrientationDidChange, object: nil)
        UIDevice.current.endGeneratingDeviceOrientationNotifications()
    }
    
}

extension ViewController{
    fileprivate func initView(){
        
    }
    
    fileprivate func showClock(interfaceOrientation:UIDeviceOrientation){
        if interfaceOrientation == UIDeviceOrientation.landscapeLeft || interfaceOrientation == UIDeviceOrientation.landscapeRight{
            if clockView.alpha == 0{
                clockView.frame = CGRect.init(x: 0, y: 0, width: SCREENW, height:SCREENH)
                clockView.backgroundColor = KJColor(102, g: 50, b: 124, a: 1)
                clockView.layer.cornerRadius = 10
                self.view.addSubview(clockView)
                let transform = CGAffineTransform.init(rotationAngle: CGFloat(Double.pi/2))
                self.clockView.transform = transform
                self.clockView.center = CGPoint.init(x: SCREENW/2, y: SCREENH/2)
                UIView.animate(withDuration: 0.5, animations: {
                    self.clockView.alpha = 1
                })
            }
            
        }else{
            if clockView.alpha == 1{
                UIView.animate(withDuration: 0.5, animations: {
                    self.clockView.alpha = 0
                }, completion: { (finish) in
                    let transform = CGAffineTransform.init(rotationAngle: CGFloat(-Double.pi/2))
                    self.clockView.transform = transform
                    self.clockView.center = CGPoint.init(x: SCREENW/2, y: SCREENH/2)
                    self.clockView.removeFromSuperview()
                })
            }
            
        }
        
        
    }
}

extension ViewController{
    private func initGesture(){
        let singleGesture = UITapGestureRecognizer.init(target: self, action: #selector(handleGesture(gesture:)))
        let panGesture = UIPanGestureRecognizer.init(target: self, action: #selector(handleGesture(gesture:)))
        view.addGestureRecognizer(singleGesture)
        view.addGestureRecognizer(panGesture)
    }
    
    @objc fileprivate func handleGesture(gesture:UIGestureRecognizer){
        let point = gesture.location(in: nil)
        ripple.initiateRipple(atLocation: point)
    }
    
    @objc fileprivate func handleDeviceOrientationDidChange(interfaceOrientation:UIInterfaceOrientation){
        //1.获取 当前设备 实例
        let device = UIDevice.current
        showClock(interfaceOrientation: device.orientation)
        /**
         *  2.取得当前Device的方向，Device的方向类型为Integer
         *
         *  必须调用beginGeneratingDeviceOrientationNotifications方法后，此orientation属性才有效，否则一直是0。orientation用于判断设备的朝向，与应用UI方向无关
         *
         *  @param device.orientation
         *
         */
        
        switch (device.orientation) {
        case UIDeviceOrientation.faceUp:
            break;
            
        case UIDeviceOrientation.faceDown:
            break;
            
        //无法判断目前Device的方向，有可能是斜置
        case UIDeviceOrientation.unknown:
            break;
            
        case UIDeviceOrientation.landscapeLeft:
            break;
            
        case UIDeviceOrientation.landscapeRight:
            break;
            
        case UIDeviceOrientation.portrait:
            break;
            
        case UIDeviceOrientation.portraitUpsideDown:
            break;
        }
        
    }
}

