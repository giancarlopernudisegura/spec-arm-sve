
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Struct;
extern StructRNA RNA_Property;
extern StructRNA RNA_BoolProperty;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Function;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_ID;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_Library;
extern StructRNA RNA_Texture;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_OceanTexData;
extern StructRNA RNA_OceanTexture;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_ColorMapping;
extern StructRNA RNA_Action;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_AnimDataDrivers;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_SteeringActuator;
extern StructRNA RNA_MouseActuator;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_Bone;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushCapabilities;
extern StructRNA RNA_SculptToolCapabilities;
extern StructRNA RNA_ImapaintToolCapabilities;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_Camera;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoints;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_ColorManagedDisplaySettings;
extern StructRNA RNA_ColorManagedViewSettings;
extern StructRNA RNA_ColorManagedInputColorspaceSettings;
extern StructRNA RNA_ColorManagedSequencerColorspaceSettings;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_FollowTrackConstraint;
extern StructRNA RNA_CameraSolverConstraint;
extern StructRNA RNA_ObjectSolverConstraint;
extern StructRNA RNA_Context;
extern StructRNA RNA_Controller;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_AndController;
extern StructRNA RNA_OrController;
extern StructRNA RNA_NorController;
extern StructRNA RNA_NandController;
extern StructRNA RNA_XorController;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_DynamicPaintCanvasSettings;
extern StructRNA RNA_DynamicPaintSurfaces;
extern StructRNA RNA_DynamicPaintBrushSettings;
extern StructRNA RNA_DynamicPaintSurface;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_Driver;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoints;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidMeshVertex;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_GreasePencilLayers;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilFrames;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilStrokes;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoints;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_RenderSlot;
extern StructRNA RNA_RenderSlots;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_Key;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_LineStyleModifier;
extern StructRNA RNA_LineStyleColorModifier;
extern StructRNA RNA_LineStyleColorModifier_AlongStroke;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleColorModifier_Material;
extern StructRNA RNA_LineStyleAlphaModifier;
extern StructRNA RNA_LineStyleAlphaModifier_AlongStroke;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleAlphaModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier;
extern StructRNA RNA_LineStyleThicknessModifier_AlongStroke;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleThicknessModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier_Calligraphy;
extern StructRNA RNA_LineStyleGeometryModifier;
extern StructRNA RNA_LineStyleGeometryModifier_Sampling;
extern StructRNA RNA_LineStyleGeometryModifier_BezierCurve;
extern StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement;
extern StructRNA RNA_LineStyleGeometryModifier_SpatialNoise;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D;
extern StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher;
extern StructRNA RNA_LineStyleGeometryModifier_TipRemover;
extern StructRNA RNA_LineStyleGeometryModifier_Polygonalization;
extern StructRNA RNA_LineStyleGeometryModifier_GuidingLines;
extern StructRNA RNA_LineStyleGeometryModifier_Blueprint;
extern StructRNA RNA_LineStyleGeometryModifier_2DOffset;
extern StructRNA RNA_LineStyleGeometryModifier_2DTransform;
extern StructRNA RNA_FreestyleLineStyle;
extern StructRNA RNA_LineStyleTextureSlots;
extern StructRNA RNA_LineStyleColorModifiers;
extern StructRNA RNA_LineStyleAlphaModifiers;
extern StructRNA RNA_LineStyleThicknessModifiers;
extern StructRNA RNA_LineStyleGeometryModifiers;
extern StructRNA RNA_LineStyleTextureSlot;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataSpeakers;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataMovieClips;
extern StructRNA RNA_BlendDataMasks;
extern StructRNA RNA_BlendDataLineStyles;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_TexPaintSlot;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialGameSettings;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshTessFaces;
extern StructRNA RNA_MeshLoops;
extern StructRNA RNA_MeshPolygons;
extern StructRNA RNA_UVLoopLayers;
extern StructRNA RNA_TessfaceUVTextures;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_LoopColors;
extern StructRNA RNA_FloatProperties;
extern StructRNA RNA_IntProperties;
extern StructRNA RNA_StringProperties;
extern StructRNA RNA_MeshSkinVertexLayer;
extern StructRNA RNA_MeshSkinVertex;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshTessFace;
extern StructRNA RNA_MeshLoop;
extern StructRNA RNA_MeshPolygon;
extern StructRNA RNA_MeshUVLoopLayer;
extern StructRNA RNA_MeshUVLoop;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTexturePolyLayer;
extern StructRNA RNA_MeshTexturePoly;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshLoopColorLayer;
extern StructRNA RNA_MeshLoopColor;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_WarpModifier;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_UVWarpModifier;
extern StructRNA RNA_VertexWeightEditModifier;
extern StructRNA RNA_VertexWeightMixModifier;
extern StructRNA RNA_VertexWeightProximityModifier;
extern StructRNA RNA_DynamicPaintModifier;
extern StructRNA RNA_OceanModifier;
extern StructRNA RNA_RemeshModifier;
extern StructRNA RNA_SkinModifier;
extern StructRNA RNA_LaplacianSmoothModifier;
extern StructRNA RNA_TriangulateModifier;
extern StructRNA RNA_MeshCacheModifier;
extern StructRNA RNA_LaplacianDeformModifier;
extern StructRNA RNA_WireframeModifier;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeSocketInterface;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeInputs;
extern StructRNA RNA_NodeOutputs;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeInternalSocketTemplate;
extern StructRNA RNA_NodeInternal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_Nodes;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeTreeInputs;
extern StructRNA RNA_NodeTreeOutputs;
extern StructRNA RNA_NodeSocketStandard;
extern StructRNA RNA_NodeSocketInterfaceStandard;
extern StructRNA RNA_NodeSocketFloat;
extern StructRNA RNA_NodeSocketInterfaceFloat;
extern StructRNA RNA_NodeSocketFloatUnsigned;
extern StructRNA RNA_NodeSocketInterfaceFloatUnsigned;
extern StructRNA RNA_NodeSocketFloatPercentage;
extern StructRNA RNA_NodeSocketInterfaceFloatPercentage;
extern StructRNA RNA_NodeSocketFloatFactor;
extern StructRNA RNA_NodeSocketInterfaceFloatFactor;
extern StructRNA RNA_NodeSocketFloatAngle;
extern StructRNA RNA_NodeSocketInterfaceFloatAngle;
extern StructRNA RNA_NodeSocketFloatTime;
extern StructRNA RNA_NodeSocketInterfaceFloatTime;
extern StructRNA RNA_NodeSocketInt;
extern StructRNA RNA_NodeSocketInterfaceInt;
extern StructRNA RNA_NodeSocketIntUnsigned;
extern StructRNA RNA_NodeSocketInterfaceIntUnsigned;
extern StructRNA RNA_NodeSocketIntPercentage;
extern StructRNA RNA_NodeSocketInterfaceIntPercentage;
extern StructRNA RNA_NodeSocketIntFactor;
extern StructRNA RNA_NodeSocketInterfaceIntFactor;
extern StructRNA RNA_NodeSocketBool;
extern StructRNA RNA_NodeSocketInterfaceBool;
extern StructRNA RNA_NodeSocketVector;
extern StructRNA RNA_NodeSocketInterfaceVector;
extern StructRNA RNA_NodeSocketVectorTranslation;
extern StructRNA RNA_NodeSocketInterfaceVectorTranslation;
extern StructRNA RNA_NodeSocketVectorDirection;
extern StructRNA RNA_NodeSocketInterfaceVectorDirection;
extern StructRNA RNA_NodeSocketVectorVelocity;
extern StructRNA RNA_NodeSocketInterfaceVectorVelocity;
extern StructRNA RNA_NodeSocketVectorAcceleration;
extern StructRNA RNA_NodeSocketInterfaceVectorAcceleration;
extern StructRNA RNA_NodeSocketVectorEuler;
extern StructRNA RNA_NodeSocketInterfaceVectorEuler;
extern StructRNA RNA_NodeSocketVectorXYZ;
extern StructRNA RNA_NodeSocketInterfaceVectorXYZ;
extern StructRNA RNA_NodeSocketColor;
extern StructRNA RNA_NodeSocketInterfaceColor;
extern StructRNA RNA_NodeSocketString;
extern StructRNA RNA_NodeSocketInterfaceString;
extern StructRNA RNA_NodeSocketShader;
extern StructRNA RNA_NodeSocketInterfaceShader;
extern StructRNA RNA_NodeSocketVirtual;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeFrame;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeGroupInput;
extern StructRNA RNA_NodeGroupOutput;
extern StructRNA RNA_NodeReroute;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeGamma;
extern StructRNA RNA_ShaderNodeBrightContrast;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeLampData;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeOutputMaterial;
extern StructRNA RNA_ShaderNodeOutputLamp;
extern StructRNA RNA_ShaderNodeOutputWorld;
extern StructRNA RNA_ShaderNodeOutputLineStyle;
extern StructRNA RNA_ShaderNodeFresnel;
extern StructRNA RNA_ShaderNodeLayerWeight;
extern StructRNA RNA_ShaderNodeMixShader;
extern StructRNA RNA_ShaderNodeAddShader;
extern StructRNA RNA_ShaderNodeAttribute;
extern StructRNA RNA_ShaderNodeAmbientOcclusion;
extern StructRNA RNA_ShaderNodeBackground;
extern StructRNA RNA_ShaderNodeHoldout;
extern StructRNA RNA_ShaderNodeBsdfAnisotropic;
extern StructRNA RNA_ShaderNodeBsdfDiffuse;
extern StructRNA RNA_ShaderNodeBsdfGlossy;
extern StructRNA RNA_ShaderNodeBsdfGlass;
extern StructRNA RNA_ShaderNodeBsdfRefraction;
extern StructRNA RNA_ShaderNodeBsdfTranslucent;
extern StructRNA RNA_ShaderNodeBsdfTransparent;
extern StructRNA RNA_ShaderNodeBsdfVelvet;
extern StructRNA RNA_ShaderNodeBsdfToon;
extern StructRNA RNA_ShaderNodeBsdfHair;
extern StructRNA RNA_ShaderNodeSubsurfaceScattering;
extern StructRNA RNA_ShaderNodeVolumeAbsorption;
extern StructRNA RNA_ShaderNodeVolumeScatter;
extern StructRNA RNA_ShaderNodeEmission;
extern StructRNA RNA_ShaderNodeNewGeometry;
extern StructRNA RNA_ShaderNodeLightPath;
extern StructRNA RNA_ShaderNodeLightFalloff;
extern StructRNA RNA_ShaderNodeObjectInfo;
extern StructRNA RNA_ShaderNodeParticleInfo;
extern StructRNA RNA_ShaderNodeHairInfo;
extern StructRNA RNA_ShaderNodeWireframe;
extern StructRNA RNA_ShaderNodeWavelength;
extern StructRNA RNA_ShaderNodeBlackbody;
extern StructRNA RNA_ShaderNodeBump;
extern StructRNA RNA_ShaderNodeNormalMap;
extern StructRNA RNA_ShaderNodeTangent;
extern StructRNA RNA_ShaderNodeScript;
extern StructRNA RNA_ShaderNodeTexImage;
extern StructRNA RNA_ShaderNodeTexEnvironment;
extern StructRNA RNA_ShaderNodeTexSky;
extern StructRNA RNA_ShaderNodeTexGradient;
extern StructRNA RNA_ShaderNodeTexNoise;
extern StructRNA RNA_ShaderNodeTexMagic;
extern StructRNA RNA_ShaderNodeTexWave;
extern StructRNA RNA_ShaderNodeTexMusgrave;
extern StructRNA RNA_ShaderNodeTexVoronoi;
extern StructRNA RNA_ShaderNodeTexChecker;
extern StructRNA RNA_ShaderNodeTexBrick;
extern StructRNA RNA_ShaderNodeTexCoord;
extern StructRNA RNA_ShaderNodeVectorTransform;
extern StructRNA RNA_ShaderNodeSeparateHSV;
extern StructRNA RNA_ShaderNodeCombineHSV;
extern StructRNA RNA_ShaderNodeUVMap;
extern StructRNA RNA_ShaderNodeUVAlongStroke;
extern StructRNA RNA_ShaderNodeSeparateXYZ;
extern StructRNA RNA_ShaderNodeCombineXYZ;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMapRange;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodeOutputFileFileSlots;
extern StructRNA RNA_CompositorNodeOutputFileLayerSlots;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeInpaint;
extern StructRNA RNA_CompositorNodeDespeckle;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeDoubleEdgeMask;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeMovieClip;
extern StructRNA RNA_CompositorNodeTransform;
extern StructRNA RNA_CompositorNodeStabilize;
extern StructRNA RNA_CompositorNodeMovieDistortion;
extern StructRNA RNA_CompositorNodeBoxMask;
extern StructRNA RNA_CompositorNodeEllipseMask;
extern StructRNA RNA_CompositorNodeBokehImage;
extern StructRNA RNA_CompositorNodeBokehBlur;
extern StructRNA RNA_CompositorNodeSwitch;
extern StructRNA RNA_CompositorNodeColorCorrection;
extern StructRNA RNA_CompositorNodeMask;
extern StructRNA RNA_CompositorNodeKeyingScreen;
extern StructRNA RNA_CompositorNodeKeying;
extern StructRNA RNA_CompositorNodeTrackPos;
extern StructRNA RNA_CompositorNodePixelate;
extern StructRNA RNA_CompositorNodePlaneTrackDeform;
extern StructRNA RNA_CompositorNodeCornerPin;
extern StructRNA RNA_CompositorNodeSunBeams;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeAt;
extern StructRNA RNA_TextureNodeTexVoronoi;
extern StructRNA RNA_TextureNodeTexBlend;
extern StructRNA RNA_TextureNodeTexMagic;
extern StructRNA RNA_TextureNodeTexMarble;
extern StructRNA RNA_TextureNodeTexClouds;
extern StructRNA RNA_TextureNodeTexWood;
extern StructRNA RNA_TextureNodeTexMusgrave;
extern StructRNA RNA_TextureNodeTexNoise;
extern StructRNA RNA_TextureNodeTexStucci;
extern StructRNA RNA_TextureNodeTexDistNoise;
extern StructRNA RNA_ShaderNodeGroup;
extern StructRNA RNA_CompositorNodeGroup;
extern StructRNA RNA_TextureNodeGroup;
extern StructRNA RNA_NodeCustomGroup;
extern StructRNA RNA_NodeOutputFileSlotFile;
extern StructRNA RNA_NodeOutputFileSlotLayer;
extern StructRNA RNA_NodeInstanceHash;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_LodLevel;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_Pose;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_BakePixel;
extern StructRNA RNA_RigidBodyWorld;
extern StructRNA RNA_RigidBodyObject;
extern StructRNA RNA_RigidBodyConstraint;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_UnifiedPaintSettings;
extern StructRNA RNA_MeshStatVis;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_ImageFormatSettings;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneGameRecastData;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_SelectedUvElement;
extern StructRNA RNA_FFmpegSettings;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_BakeSettings;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_FreestyleLineSet;
extern StructRNA RNA_FreestyleModuleSettings;
extern StructRNA RNA_FreestyleSettings;
extern StructRNA RNA_FreestyleModules;
extern StructRNA RNA_Linesets;
extern StructRNA RNA_Screen;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaSpaces;
extern StructRNA RNA_Region;
extern StructRNA RNA_View2D;
extern StructRNA RNA_PaletteColor;
extern StructRNA RNA_Palette;
extern StructRNA RNA_PaintCurve;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_UvSculpt;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_SequenceColorBalanceData;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceModifiers;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_Sequences;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_SequenceElements;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MovieClipSequence;
extern StructRNA RNA_MaskSequence;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_AddSequence;
extern StructRNA RNA_AdjustmentSequence;
extern StructRNA RNA_AlphaOverSequence;
extern StructRNA RNA_AlphaUnderSequence;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CrossSequence;
extern StructRNA RNA_GammaCrossSequence;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiplySequence;
extern StructRNA RNA_OverDropSequence;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_SubtractSequence;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_GaussianBlurSequence;
extern StructRNA RNA_SequenceModifier;
extern StructRNA RNA_ColorBalanceModifier;
extern StructRNA RNA_CurvesModifier;
extern StructRNA RNA_HueCorrectModifier;
extern StructRNA RNA_BrightContrastModifier;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_BackgroundImages;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_NodeTreePath;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceNodeEditorPath;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceClipEditor;
extern StructRNA RNA_Speaker;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_Text;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_Sound;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_Panel;
extern StructRNA RNA_UIList;
extern StructRNA RNA_Header;
extern StructRNA RNA_Menu;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_ThemePanelColors;
extern StructRNA RNA_ThemeGradientColors;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeSpaceGeneric;
extern StructRNA RNA_ThemeSpaceGradient;
extern StructRNA RNA_ThemeSpaceListGeneric;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeClipEditor;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_Theme;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_WalkNavigation;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_Addons;
extern StructRNA RNA_PathCompareCollection;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_Addon;
extern StructRNA RNA_AddonPreferences;
extern StructRNA RNA_PathCompare;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_Macro;
extern StructRNA RNA_OperatorMacro;
extern StructRNA RNA_Event;
extern StructRNA RNA_Timer;
extern StructRNA RNA_UIPopupMenu;
extern StructRNA RNA_UIPieMenu;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_MovieClip;
extern StructRNA RNA_MovieClipProxy;
extern StructRNA RNA_MovieClipUser;
extern StructRNA RNA_MovieClipScopes;
extern StructRNA RNA_MovieTrackingSettings;
extern StructRNA RNA_MovieTrackingCamera;
extern StructRNA RNA_MovieTrackingMarker;
extern StructRNA RNA_MovieTrackingTrack;
extern StructRNA RNA_MovieTrackingMarkers;
extern StructRNA RNA_MovieTrackingPlaneMarker;
extern StructRNA RNA_MovieTrackingPlaneTrack;
extern StructRNA RNA_MovieTrackingPlaneMarkers;
extern StructRNA RNA_MovieTrackingTracks;
extern StructRNA RNA_MovieTrackingPlaneTracks;
extern StructRNA RNA_MovieTrackingObjectTracks;
extern StructRNA RNA_MovieTrackingObjectPlaneTracks;
extern StructRNA RNA_MovieTrackingStabilization;
extern StructRNA RNA_MovieTrackingReconstructedCameras;
extern StructRNA RNA_MovieReconstructedCamera;
extern StructRNA RNA_MovieTrackingReconstruction;
extern StructRNA RNA_MovieTrackingObject;
extern StructRNA RNA_MovieTrackingDopesheet;
extern StructRNA RNA_MovieTracking;
extern StructRNA RNA_MovieTrackingObjects;
extern StructRNA RNA_MaskParent;
extern StructRNA RNA_MaskSplinePointUW;
extern StructRNA RNA_MaskSplinePoint;
extern StructRNA RNA_MaskSpline;
extern StructRNA RNA_MaskSplines;
extern StructRNA RNA_MaskSplinePoints;
extern StructRNA RNA_MaskLayer;
extern StructRNA RNA_Mask;
extern StructRNA RNA_MaskLayers;

#include "rna_actuator.c"
#include "rna_actuator_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_Actuator_rna_properties;
PointerPropertyRNA rna_Actuator_rna_type;
StringPropertyRNA rna_Actuator_name;
EnumPropertyRNA rna_Actuator_type;
BoolPropertyRNA rna_Actuator_pin;
BoolPropertyRNA rna_Actuator_show_expanded;
BoolPropertyRNA rna_Actuator_active;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_ActionActuator_play_mode;
PointerPropertyRNA rna_ActionActuator_action;
BoolPropertyRNA rna_ActionActuator_use_continue_last_frame;
StringPropertyRNA rna_ActionActuator_property;
FloatPropertyRNA rna_ActionActuator_frame_start;
FloatPropertyRNA rna_ActionActuator_frame_end;
IntPropertyRNA rna_ActionActuator_frame_blend_in;
IntPropertyRNA rna_ActionActuator_priority;
IntPropertyRNA rna_ActionActuator_layer;
FloatPropertyRNA rna_ActionActuator_layer_weight;
StringPropertyRNA rna_ActionActuator_frame_property;
BoolPropertyRNA rna_ActionActuator_use_additive;
BoolPropertyRNA rna_ActionActuator_use_force;
BoolPropertyRNA rna_ActionActuator_use_local;
BoolPropertyRNA rna_ActionActuator_apply_to_children;
EnumPropertyRNA rna_ActionActuator_blend_mode;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_ObjectActuator_mode;
PointerPropertyRNA rna_ObjectActuator_reference_object;
IntPropertyRNA rna_ObjectActuator_damping;
FloatPropertyRNA rna_ObjectActuator_proportional_coefficient;
FloatPropertyRNA rna_ObjectActuator_integral_coefficient;
FloatPropertyRNA rna_ObjectActuator_derivate_coefficient;
FloatPropertyRNA rna_ObjectActuator_force_max_x;
FloatPropertyRNA rna_ObjectActuator_force_min_x;
FloatPropertyRNA rna_ObjectActuator_force_max_y;
FloatPropertyRNA rna_ObjectActuator_force_min_y;
FloatPropertyRNA rna_ObjectActuator_force_max_z;
FloatPropertyRNA rna_ObjectActuator_force_min_z;
FloatPropertyRNA rna_ObjectActuator_offset_location;
FloatPropertyRNA rna_ObjectActuator_offset_rotation;
FloatPropertyRNA rna_ObjectActuator_force;
FloatPropertyRNA rna_ObjectActuator_torque;
FloatPropertyRNA rna_ObjectActuator_linear_velocity;
FloatPropertyRNA rna_ObjectActuator_angular_velocity;
BoolPropertyRNA rna_ObjectActuator_use_local_location;
BoolPropertyRNA rna_ObjectActuator_use_local_rotation;
BoolPropertyRNA rna_ObjectActuator_use_local_force;
BoolPropertyRNA rna_ObjectActuator_use_local_torque;
BoolPropertyRNA rna_ObjectActuator_use_local_linear_velocity;
BoolPropertyRNA rna_ObjectActuator_use_local_angular_velocity;
BoolPropertyRNA rna_ObjectActuator_use_add_linear_velocity;
BoolPropertyRNA rna_ObjectActuator_use_add_character_location;
BoolPropertyRNA rna_ObjectActuator_use_servo_limit_x;
BoolPropertyRNA rna_ObjectActuator_use_servo_limit_y;
BoolPropertyRNA rna_ObjectActuator_use_servo_limit_z;
BoolPropertyRNA rna_ObjectActuator_use_character_jump;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

PointerPropertyRNA rna_CameraActuator_object;
FloatPropertyRNA rna_CameraActuator_height;
FloatPropertyRNA rna_CameraActuator_min;
FloatPropertyRNA rna_CameraActuator_max;
FloatPropertyRNA rna_CameraActuator_damping;
EnumPropertyRNA rna_CameraActuator_axis;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

PointerPropertyRNA rna_SoundActuator_sound;
EnumPropertyRNA rna_SoundActuator_mode;
FloatPropertyRNA rna_SoundActuator_volume;
FloatPropertyRNA rna_SoundActuator_pitch;
FloatPropertyRNA rna_SoundActuator_gain_3d_min;
FloatPropertyRNA rna_SoundActuator_gain_3d_max;
FloatPropertyRNA rna_SoundActuator_distance_3d_reference;
FloatPropertyRNA rna_SoundActuator_distance_3d_max;
FloatPropertyRNA rna_SoundActuator_rolloff_factor_3d;
FloatPropertyRNA rna_SoundActuator_cone_outer_gain_3d;
FloatPropertyRNA rna_SoundActuator_cone_outer_angle_3d;
FloatPropertyRNA rna_SoundActuator_cone_inner_angle_3d;
BoolPropertyRNA rna_SoundActuator_use_sound_3d;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_PropertyActuator_mode;
StringPropertyRNA rna_PropertyActuator_property;
StringPropertyRNA rna_PropertyActuator_value;
PointerPropertyRNA rna_PropertyActuator_object;
StringPropertyRNA rna_PropertyActuator_object_property;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_ConstraintActuator_mode;
EnumPropertyRNA rna_ConstraintActuator_limit;
EnumPropertyRNA rna_ConstraintActuator_direction;
EnumPropertyRNA rna_ConstraintActuator_direction_axis;
FloatPropertyRNA rna_ConstraintActuator_limit_min;
FloatPropertyRNA rna_ConstraintActuator_limit_max;
IntPropertyRNA rna_ConstraintActuator_damping;
FloatPropertyRNA rna_ConstraintActuator_range;
FloatPropertyRNA rna_ConstraintActuator_distance;
StringPropertyRNA rna_ConstraintActuator_material;
StringPropertyRNA rna_ConstraintActuator_property;
IntPropertyRNA rna_ConstraintActuator_time;
IntPropertyRNA rna_ConstraintActuator_damping_rotation;
EnumPropertyRNA rna_ConstraintActuator_direction_axis_pos;
FloatPropertyRNA rna_ConstraintActuator_rotation_max;
FloatPropertyRNA rna_ConstraintActuator_angle_min;
FloatPropertyRNA rna_ConstraintActuator_angle_max;
FloatPropertyRNA rna_ConstraintActuator_fh_height;
FloatPropertyRNA rna_ConstraintActuator_fh_force;
FloatPropertyRNA rna_ConstraintActuator_fh_damping;
BoolPropertyRNA rna_ConstraintActuator_use_force_distance;
BoolPropertyRNA rna_ConstraintActuator_use_local;
BoolPropertyRNA rna_ConstraintActuator_use_normal;
BoolPropertyRNA rna_ConstraintActuator_use_persistent;
BoolPropertyRNA rna_ConstraintActuator_use_material_detect;
BoolPropertyRNA rna_ConstraintActuator_use_fh_paralel_axis;
BoolPropertyRNA rna_ConstraintActuator_use_fh_normal;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_EditObjectActuator_mode;
EnumPropertyRNA rna_EditObjectActuator_dynamic_operation;
EnumPropertyRNA rna_EditObjectActuator_up_axis;
EnumPropertyRNA rna_EditObjectActuator_track_axis;
PointerPropertyRNA rna_EditObjectActuator_object;
PointerPropertyRNA rna_EditObjectActuator_track_object;
PointerPropertyRNA rna_EditObjectActuator_mesh;
IntPropertyRNA rna_EditObjectActuator_time;
FloatPropertyRNA rna_EditObjectActuator_mass;
FloatPropertyRNA rna_EditObjectActuator_linear_velocity;
FloatPropertyRNA rna_EditObjectActuator_angular_velocity;
BoolPropertyRNA rna_EditObjectActuator_use_local_linear_velocity;
BoolPropertyRNA rna_EditObjectActuator_use_local_angular_velocity;
BoolPropertyRNA rna_EditObjectActuator_use_replace_display_mesh;
BoolPropertyRNA rna_EditObjectActuator_use_replace_physics_mesh;
BoolPropertyRNA rna_EditObjectActuator_use_3d_tracking;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_SceneActuator_mode;
PointerPropertyRNA rna_SceneActuator_camera;
PointerPropertyRNA rna_SceneActuator_scene;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

IntPropertyRNA rna_RandomActuator_seed;
StringPropertyRNA rna_RandomActuator_property;
EnumPropertyRNA rna_RandomActuator_distribution;
BoolPropertyRNA rna_RandomActuator_use_always_true;
FloatPropertyRNA rna_RandomActuator_chance;
IntPropertyRNA rna_RandomActuator_int_value;
IntPropertyRNA rna_RandomActuator_int_min;
IntPropertyRNA rna_RandomActuator_int_max;
FloatPropertyRNA rna_RandomActuator_int_mean;
FloatPropertyRNA rna_RandomActuator_float_value;
FloatPropertyRNA rna_RandomActuator_float_min;
FloatPropertyRNA rna_RandomActuator_float_max;
FloatPropertyRNA rna_RandomActuator_float_mean;
FloatPropertyRNA rna_RandomActuator_standard_derivation;
FloatPropertyRNA rna_RandomActuator_half_life_time;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

StringPropertyRNA rna_MessageActuator_to_property;
StringPropertyRNA rna_MessageActuator_subject;
EnumPropertyRNA rna_MessageActuator_body_type;
StringPropertyRNA rna_MessageActuator_body_message;
StringPropertyRNA rna_MessageActuator_body_property;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_GameActuator_mode;
StringPropertyRNA rna_GameActuator_filename;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

BoolPropertyRNA rna_VisibilityActuator_use_visible;
BoolPropertyRNA rna_VisibilityActuator_use_occlusion;
BoolPropertyRNA rna_VisibilityActuator_apply_to_children;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_Filter2DActuator_mode;
PointerPropertyRNA rna_Filter2DActuator_glsl_shader;
IntPropertyRNA rna_Filter2DActuator_filter_pass;
FloatPropertyRNA rna_Filter2DActuator_motion_blur_factor;
BoolPropertyRNA rna_Filter2DActuator_use_motion_blur;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_ParentActuator_mode;
PointerPropertyRNA rna_ParentActuator_object;
BoolPropertyRNA rna_ParentActuator_use_compound;
BoolPropertyRNA rna_ParentActuator_use_ghost;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_StateActuator_operation;
BoolPropertyRNA rna_StateActuator_states;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_ArmatureActuator_mode;
StringPropertyRNA rna_ArmatureActuator_bone;
StringPropertyRNA rna_ArmatureActuator_constraint;
PointerPropertyRNA rna_ArmatureActuator_target;
PointerPropertyRNA rna_ArmatureActuator_secondary_target;
FloatPropertyRNA rna_ArmatureActuator_weight;
FloatPropertyRNA rna_ArmatureActuator_influence;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_SteeringActuator_mode;
FloatPropertyRNA rna_SteeringActuator_velocity;
FloatPropertyRNA rna_SteeringActuator_acceleration;
FloatPropertyRNA rna_SteeringActuator_turn_speed;
FloatPropertyRNA rna_SteeringActuator_distance;
PointerPropertyRNA rna_SteeringActuator_target;
BoolPropertyRNA rna_SteeringActuator_self_terminated;
BoolPropertyRNA rna_SteeringActuator_show_visualization;
IntPropertyRNA rna_SteeringActuator_update_period;
PointerPropertyRNA rna_SteeringActuator_navmesh;
BoolPropertyRNA rna_SteeringActuator_facing;
EnumPropertyRNA rna_SteeringActuator_facing_axis;
BoolPropertyRNA rna_SteeringActuator_normal_up;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;



extern CollectionPropertyRNA rna_Actuator_rna_properties;
extern PointerPropertyRNA rna_Actuator_rna_type;
extern StringPropertyRNA rna_Actuator_name;
extern EnumPropertyRNA rna_Actuator_type;
extern BoolPropertyRNA rna_Actuator_pin;
extern BoolPropertyRNA rna_Actuator_show_expanded;
extern BoolPropertyRNA rna_Actuator_active;

EnumPropertyRNA rna_MouseActuator_mode;
BoolPropertyRNA rna_MouseActuator_visible;
BoolPropertyRNA rna_MouseActuator_use_axis_x;
BoolPropertyRNA rna_MouseActuator_use_axis_y;
BoolPropertyRNA rna_MouseActuator_reset_x;
BoolPropertyRNA rna_MouseActuator_reset_y;
BoolPropertyRNA rna_MouseActuator_local_x;
BoolPropertyRNA rna_MouseActuator_local_y;
FloatPropertyRNA rna_MouseActuator_threshold_x;
FloatPropertyRNA rna_MouseActuator_threshold_y;
EnumPropertyRNA rna_MouseActuator_object_axis_x;
EnumPropertyRNA rna_MouseActuator_object_axis_y;
FloatPropertyRNA rna_MouseActuator_sensitivity_x;
FloatPropertyRNA rna_MouseActuator_sensitivity_y;
FloatPropertyRNA rna_MouseActuator_min_x;
FloatPropertyRNA rna_MouseActuator_max_x;
FloatPropertyRNA rna_MouseActuator_min_y;
FloatPropertyRNA rna_MouseActuator_max_y;

extern FunctionRNA rna_Actuator_link_func;
extern PointerPropertyRNA rna_Actuator_link_controller;

extern FunctionRNA rna_Actuator_unlink_func;
extern PointerPropertyRNA rna_Actuator_unlink_controller;


static PointerRNA Actuator_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Actuator_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Actuator_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Actuator_rna_properties_get(iter);
}

void Actuator_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Actuator_rna_properties_get(iter);
}

void Actuator_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Actuator_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Actuator_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Actuator_name_get(PointerRNA *ptr, char *value)
{
	bActuator *data = (bActuator *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int Actuator_name_length(PointerRNA *ptr)
{
	bActuator *data = (bActuator *)(ptr->data);
	return strlen(data->name);
}

void Actuator_name_set(PointerRNA *ptr, const char *value)
{
	rna_Actuator_name_set(ptr, value);
}

int Actuator_type_get(PointerRNA *ptr)
{
	bActuator *data = (bActuator *)(ptr->data);
	return (int)(data->type);
}

void Actuator_type_set(PointerRNA *ptr, int value)
{
	rna_Actuator_type_set(ptr, value);
}

int Actuator_pin_get(PointerRNA *ptr)
{
	bActuator *data = (bActuator *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Actuator_pin_set(PointerRNA *ptr, int value)
{
	bActuator *data = (bActuator *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int Actuator_show_expanded_get(PointerRNA *ptr)
{
	bActuator *data = (bActuator *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Actuator_show_expanded_set(PointerRNA *ptr, int value)
{
	bActuator *data = (bActuator *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int Actuator_active_get(PointerRNA *ptr)
{
	bActuator *data = (bActuator *)(ptr->data);
	return !(((data->flag) & 64) != 0);
}

void Actuator_active_set(PointerRNA *ptr, int value)
{
	bActuator *data = (bActuator *)(ptr->data);
	if (!value) data->flag |= 64;
	else data->flag &= ~64;
}

int ActionActuator_play_mode_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void ActionActuator_play_mode_set(PointerRNA *ptr, int value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

PointerRNA ActionActuator_action_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Action, data->act);
}

void ActionActuator_action_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Actuator_action_action_set(ptr, value);
}

int ActionActuator_use_continue_last_frame_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return !(((data->end_reset) & 1) != 0);
}

void ActionActuator_use_continue_last_frame_set(PointerRNA *ptr, int value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	if (!value) data->end_reset |= 1;
	else data->end_reset &= ~1;
}

void ActionActuator_property_get(PointerRNA *ptr, char *value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int ActionActuator_property_length(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->name);
}

void ActionActuator_property_set(PointerRNA *ptr, const char *value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->name, value, 64);
}

float ActionActuator_frame_start_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sta);
}

void ActionActuator_frame_start_set(PointerRNA *ptr, float value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	data->sta = value;
}

float ActionActuator_frame_end_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->end);
}

void ActionActuator_frame_end_set(PointerRNA *ptr, float value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	data->end = value;
}

int ActionActuator_frame_blend_in_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->blendin);
}

void ActionActuator_frame_blend_in_set(PointerRNA *ptr, int value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	data->blendin = CLAMPIS(value, 0, 32767);
}

int ActionActuator_priority_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->priority);
}

void ActionActuator_priority_set(PointerRNA *ptr, int value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	data->priority = CLAMPIS(value, 0, 100);
}

int ActionActuator_layer_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->layer);
}

void ActionActuator_layer_set(PointerRNA *ptr, int value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	data->layer = CLAMPIS(value, 0, 32766);
}

float ActionActuator_layer_weight_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->layer_weight);
}

void ActionActuator_layer_weight_set(PointerRNA *ptr, float value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	data->layer_weight = CLAMPIS(value, 0.0f, 1.0f);
}

void ActionActuator_frame_property_get(PointerRNA *ptr, char *value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->frameProp, 64);
}

int ActionActuator_frame_property_length(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->frameProp);
}

void ActionActuator_frame_property_set(PointerRNA *ptr, const char *value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->frameProp, value, 64);
}

int ActionActuator_use_additive_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void ActionActuator_use_additive_set(PointerRNA *ptr, int value)
{
	rna_ActionActuator_add_set(ptr, value);
}

int ActionActuator_use_force_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void ActionActuator_use_force_set(PointerRNA *ptr, int value)
{
	rna_ActionActuator_force_set(ptr, value);
}

int ActionActuator_use_local_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void ActionActuator_use_local_set(PointerRNA *ptr, int value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int ActionActuator_apply_to_children_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void ActionActuator_apply_to_children_set(PointerRNA *ptr, int value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int ActionActuator_blend_mode_get(PointerRNA *ptr)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->blend_mode);
}

void ActionActuator_blend_mode_set(PointerRNA *ptr, int value)
{
	bActionActuator *data = (bActionActuator *)(((bActuator *)ptr->data)->data);
	data->blend_mode = value;
}

int ObjectActuator_mode_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void ObjectActuator_mode_set(PointerRNA *ptr, int value)
{
	rna_ObjectActuator_type_set(ptr, value);
}

PointerRNA ObjectActuator_reference_object_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->reference);
}

void ObjectActuator_reference_object_set(PointerRNA *ptr, PointerRNA value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->reference = value.data;
}

int ObjectActuator_damping_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->damping);
}

void ObjectActuator_damping_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	data->damping = CLAMPIS(value, -32768, 32767);
}

float ObjectActuator_proportional_coefficient_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->forcerot[0]);
}

void ObjectActuator_proportional_coefficient_set(PointerRNA *ptr, float value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	data->forcerot[0] = value;
}

float ObjectActuator_integral_coefficient_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->forcerot[1]);
}

void ObjectActuator_integral_coefficient_set(PointerRNA *ptr, float value)
{
	rna_ObjectActuator_integralcoefficient_set(ptr, value);
}

float ObjectActuator_derivate_coefficient_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->forcerot[2]);
}

void ObjectActuator_derivate_coefficient_set(PointerRNA *ptr, float value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	data->forcerot[2] = value;
}

float ObjectActuator_force_max_x_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->dloc[0]);
}

void ObjectActuator_force_max_x_set(PointerRNA *ptr, float value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	data->dloc[0] = value;
}

float ObjectActuator_force_min_x_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->drot[0]);
}

void ObjectActuator_force_min_x_set(PointerRNA *ptr, float value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	data->drot[0] = value;
}

float ObjectActuator_force_max_y_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->dloc[1]);
}

void ObjectActuator_force_max_y_set(PointerRNA *ptr, float value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	data->dloc[1] = value;
}

float ObjectActuator_force_min_y_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->drot[1]);
}

void ObjectActuator_force_min_y_set(PointerRNA *ptr, float value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	data->drot[1] = value;
}

float ObjectActuator_force_max_z_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->dloc[2]);
}

void ObjectActuator_force_max_z_set(PointerRNA *ptr, float value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	data->dloc[2] = value;
}

float ObjectActuator_force_min_z_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->drot[2]);
}

void ObjectActuator_force_min_z_set(PointerRNA *ptr, float value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	data->drot[2] = value;
}

void ObjectActuator_offset_location_get(PointerRNA *ptr, float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->dloc)[i]);
	}
}

void ObjectActuator_offset_location_set(PointerRNA *ptr, const float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->dloc)[i] = values[i];
	}
}

void ObjectActuator_offset_rotation_get(PointerRNA *ptr, float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->drot)[i]);
	}
}

void ObjectActuator_offset_rotation_set(PointerRNA *ptr, const float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->drot)[i] = values[i];
	}
}

void ObjectActuator_force_get(PointerRNA *ptr, float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->forceloc)[i]);
	}
}

void ObjectActuator_force_set(PointerRNA *ptr, const float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->forceloc)[i] = values[i];
	}
}

void ObjectActuator_torque_get(PointerRNA *ptr, float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->forcerot)[i]);
	}
}

void ObjectActuator_torque_set(PointerRNA *ptr, const float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->forcerot)[i] = values[i];
	}
}

void ObjectActuator_linear_velocity_get(PointerRNA *ptr, float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->linearvelocity)[i]);
	}
}

void ObjectActuator_linear_velocity_set(PointerRNA *ptr, const float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->linearvelocity)[i] = values[i];
	}
}

void ObjectActuator_angular_velocity_get(PointerRNA *ptr, float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->angularvelocity)[i]);
	}
}

void ObjectActuator_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->angularvelocity)[i] = values[i];
	}
}

int ObjectActuator_use_local_location_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void ObjectActuator_use_local_location_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int ObjectActuator_use_local_rotation_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void ObjectActuator_use_local_rotation_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int ObjectActuator_use_local_force_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void ObjectActuator_use_local_force_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ObjectActuator_use_local_torque_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void ObjectActuator_use_local_torque_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ObjectActuator_use_local_linear_velocity_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void ObjectActuator_use_local_linear_velocity_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int ObjectActuator_use_local_angular_velocity_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void ObjectActuator_use_local_angular_velocity_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int ObjectActuator_use_add_linear_velocity_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 64) != 0);
}

void ObjectActuator_use_add_linear_velocity_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int ObjectActuator_use_add_character_location_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 128) != 0);
}

void ObjectActuator_use_add_character_location_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int ObjectActuator_use_servo_limit_x_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void ObjectActuator_use_servo_limit_x_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ObjectActuator_use_servo_limit_y_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void ObjectActuator_use_servo_limit_y_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int ObjectActuator_use_servo_limit_z_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void ObjectActuator_use_servo_limit_z_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int ObjectActuator_use_character_jump_get(PointerRNA *ptr)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 256) != 0);
}

void ObjectActuator_use_character_jump_set(PointerRNA *ptr, int value)
{
	bObjectActuator *data = (bObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

PointerRNA CameraActuator_object_get(PointerRNA *ptr)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void CameraActuator_object_set(PointerRNA *ptr, PointerRNA value)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

float CameraActuator_height_get(PointerRNA *ptr)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->height);
}

void CameraActuator_height_set(PointerRNA *ptr, float value)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	data->height = value;
}

float CameraActuator_min_get(PointerRNA *ptr)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->min);
}

void CameraActuator_min_set(PointerRNA *ptr, float value)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	data->min = value;
}

float CameraActuator_max_get(PointerRNA *ptr)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->max);
}

void CameraActuator_max_set(PointerRNA *ptr, float value)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	data->max = value;
}

float CameraActuator_damping_get(PointerRNA *ptr)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->damping);
}

void CameraActuator_damping_set(PointerRNA *ptr, float value)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	data->damping = CLAMPIS(value, 0.0f, 10.0f);
}

int CameraActuator_axis_get(PointerRNA *ptr)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->axis);
}

void CameraActuator_axis_set(PointerRNA *ptr, int value)
{
	bCameraActuator *data = (bCameraActuator *)(((bActuator *)ptr->data)->data);
	data->axis = value;
}

PointerRNA SoundActuator_sound_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sound, data->sound);
}

void SoundActuator_sound_set(PointerRNA *ptr, PointerRNA value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);

	if (data->sound)
		id_us_min((ID *)data->sound);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->sound = value.data;
}

int SoundActuator_mode_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void SoundActuator_mode_set(PointerRNA *ptr, int value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

float SoundActuator_volume_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->volume);
}

void SoundActuator_volume_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->volume = CLAMPIS(value, 0.0f, 2.0f);
}

float SoundActuator_pitch_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->pitch);
}

void SoundActuator_pitch_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->pitch = value;
}

float SoundActuator_gain_3d_min_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sound3D.min_gain);
}

void SoundActuator_gain_3d_min_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->sound3D.min_gain = value;
}

float SoundActuator_gain_3d_max_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sound3D.max_gain);
}

void SoundActuator_gain_3d_max_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->sound3D.max_gain = value;
}

float SoundActuator_distance_3d_reference_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sound3D.reference_distance);
}

void SoundActuator_distance_3d_reference_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->sound3D.reference_distance = value;
}

float SoundActuator_distance_3d_max_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sound3D.max_distance);
}

void SoundActuator_distance_3d_max_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->sound3D.max_distance = value;
}

float SoundActuator_rolloff_factor_3d_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sound3D.rolloff_factor);
}

void SoundActuator_rolloff_factor_3d_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->sound3D.rolloff_factor = value;
}

float SoundActuator_cone_outer_gain_3d_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sound3D.cone_outer_gain);
}

void SoundActuator_cone_outer_gain_3d_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->sound3D.cone_outer_gain = value;
}

float SoundActuator_cone_outer_angle_3d_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sound3D.cone_outer_angle);
}

void SoundActuator_cone_outer_angle_3d_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->sound3D.cone_outer_angle = value;
}

float SoundActuator_cone_inner_angle_3d_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sound3D.cone_inner_angle);
}

void SoundActuator_cone_inner_angle_3d_set(PointerRNA *ptr, float value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	data->sound3D.cone_inner_angle = value;
}

int SoundActuator_use_sound_3d_get(PointerRNA *ptr)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void SoundActuator_use_sound_3d_set(PointerRNA *ptr, int value)
{
	bSoundActuator *data = (bSoundActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int PropertyActuator_mode_get(PointerRNA *ptr)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void PropertyActuator_mode_set(PointerRNA *ptr, int value)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

void PropertyActuator_property_get(PointerRNA *ptr, char *value)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int PropertyActuator_property_length(PointerRNA *ptr)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->name);
}

void PropertyActuator_property_set(PointerRNA *ptr, const char *value)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->name, value, 64);
}

void PropertyActuator_value_get(PointerRNA *ptr, char *value)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->value, 64);
}

int PropertyActuator_value_length(PointerRNA *ptr)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->value);
}

void PropertyActuator_value_set(PointerRNA *ptr, const char *value)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->value, value, 64);
}

PointerRNA PropertyActuator_object_get(PointerRNA *ptr)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void PropertyActuator_object_set(PointerRNA *ptr, PointerRNA value)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

void PropertyActuator_object_property_get(PointerRNA *ptr, char *value)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->value, 64);
}

int PropertyActuator_object_property_length(PointerRNA *ptr)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->value);
}

void PropertyActuator_object_property_set(PointerRNA *ptr, const char *value)
{
	bPropertyActuator *data = (bPropertyActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->value, value, 64);
}

int ConstraintActuator_mode_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void ConstraintActuator_mode_set(PointerRNA *ptr, int value)
{
	rna_ConstraintActuator_type_set(ptr, value);
}

int ConstraintActuator_limit_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->flag);
}

void ConstraintActuator_limit_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->flag = value;
}

int ConstraintActuator_direction_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->mode);
}

void ConstraintActuator_direction_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->mode = value;
}

int ConstraintActuator_direction_axis_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->mode);
}

void ConstraintActuator_direction_axis_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->mode = value;
}

float ConstraintActuator_limit_min_get(PointerRNA *ptr)
{
	return rna_ConstraintActuator_limitmin_get(ptr);
}

void ConstraintActuator_limit_min_set(PointerRNA *ptr, float value)
{
	rna_ConstraintActuator_limitmin_set(ptr, value);
}

float ConstraintActuator_limit_max_get(PointerRNA *ptr)
{
	return rna_ConstraintActuator_limitmax_get(ptr);
}

void ConstraintActuator_limit_max_set(PointerRNA *ptr, float value)
{
	rna_ConstraintActuator_limitmax_set(ptr, value);
}

int ConstraintActuator_damping_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->damp);
}

void ConstraintActuator_damping_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->damp = CLAMPIS(value, -32768, 32767);
}

float ConstraintActuator_range_get(PointerRNA *ptr)
{
	return rna_ConstraintActuator_range_get(ptr);
}

void ConstraintActuator_range_set(PointerRNA *ptr, float value)
{
	rna_ConstraintActuator_range_set(ptr, value);
}

float ConstraintActuator_distance_get(PointerRNA *ptr)
{
	return rna_ConstraintActuator_distance_get(ptr);
}

void ConstraintActuator_distance_set(PointerRNA *ptr, float value)
{
	rna_ConstraintActuator_distance_set(ptr, value);
}

void ConstraintActuator_material_get(PointerRNA *ptr, char *value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->matprop, 64);
}

int ConstraintActuator_material_length(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->matprop);
}

void ConstraintActuator_material_set(PointerRNA *ptr, const char *value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->matprop, value, 64);
}

void ConstraintActuator_property_get(PointerRNA *ptr, char *value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->matprop, 64);
}

int ConstraintActuator_property_length(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->matprop);
}

void ConstraintActuator_property_set(PointerRNA *ptr, const char *value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->matprop, value, 64);
}

int ConstraintActuator_time_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->time);
}

void ConstraintActuator_time_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->time = CLAMPIS(value, -32768, 32767);
}

int ConstraintActuator_damping_rotation_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->rotdamp);
}

void ConstraintActuator_damping_rotation_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->rotdamp = CLAMPIS(value, -32768, 32767);
}

int ConstraintActuator_direction_axis_pos_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->mode);
}

void ConstraintActuator_direction_axis_pos_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->mode = value;
}

void ConstraintActuator_rotation_max_get(PointerRNA *ptr, float values[3])
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->maxrot)[i]);
	}
}

void ConstraintActuator_rotation_max_set(PointerRNA *ptr, const float values[3])
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->maxrot)[i] = values[i];
	}
}

float ConstraintActuator_angle_min_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->minloc[0]);
}

void ConstraintActuator_angle_min_set(PointerRNA *ptr, float value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->minloc[0] = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float ConstraintActuator_angle_max_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->maxloc[0]);
}

void ConstraintActuator_angle_max_set(PointerRNA *ptr, float value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->maxloc[0] = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float ConstraintActuator_fh_height_get(PointerRNA *ptr)
{
	return rna_ConstraintActuator_fhheight_get(ptr);
}

void ConstraintActuator_fh_height_set(PointerRNA *ptr, float value)
{
	rna_ConstraintActuator_fhheight_set(ptr, value);
}

float ConstraintActuator_fh_force_get(PointerRNA *ptr)
{
	return rna_ConstraintActuator_spring_get(ptr);
}

void ConstraintActuator_fh_force_set(PointerRNA *ptr, float value)
{
	rna_ConstraintActuator_spring_set(ptr, value);
}

float ConstraintActuator_fh_damping_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->maxrot[0]);
}

void ConstraintActuator_fh_damping_set(PointerRNA *ptr, float value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	data->maxrot[0] = value;
}

int ConstraintActuator_use_force_distance_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 512) != 0);
}

void ConstraintActuator_use_force_distance_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int ConstraintActuator_use_local_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 1024) != 0);
}

void ConstraintActuator_use_local_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int ConstraintActuator_use_normal_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 64) != 0);
}

void ConstraintActuator_use_normal_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int ConstraintActuator_use_persistent_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 256) != 0);
}

void ConstraintActuator_use_persistent_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int ConstraintActuator_use_material_detect_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 128) != 0);
}

void ConstraintActuator_use_material_detect_set(PointerRNA *ptr, int value)
{
	rna_Actuator_constraint_detect_material_set(ptr, value);
}

int ConstraintActuator_use_fh_paralel_axis_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 2048) != 0);
}

void ConstraintActuator_use_fh_paralel_axis_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int ConstraintActuator_use_fh_normal_get(PointerRNA *ptr)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 64) != 0);
}

void ConstraintActuator_use_fh_normal_set(PointerRNA *ptr, int value)
{
	bConstraintActuator *data = (bConstraintActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int EditObjectActuator_mode_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void EditObjectActuator_mode_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

int EditObjectActuator_dynamic_operation_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->dyn_operation);
}

void EditObjectActuator_dynamic_operation_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	data->dyn_operation = value;
}

int EditObjectActuator_up_axis_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->upflag);
}

void EditObjectActuator_up_axis_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	data->upflag = value;
}

int EditObjectActuator_track_axis_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->trackflag);
}

void EditObjectActuator_track_axis_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	data->trackflag = value;
}

PointerRNA EditObjectActuator_object_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void EditObjectActuator_object_set(PointerRNA *ptr, PointerRNA value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

PointerRNA EditObjectActuator_track_object_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void EditObjectActuator_track_object_set(PointerRNA *ptr, PointerRNA value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

PointerRNA EditObjectActuator_mesh_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Mesh, data->me);
}

void EditObjectActuator_mesh_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Actuator_editobject_mesh_set(ptr, value);
}

int EditObjectActuator_time_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->time);
}

void EditObjectActuator_time_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	data->time = value;
}

float EditObjectActuator_mass_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->mass);
}

void EditObjectActuator_mass_set(PointerRNA *ptr, float value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	data->mass = value;
}

void EditObjectActuator_linear_velocity_get(PointerRNA *ptr, float values[3])
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->linVelocity)[i]);
	}
}

void EditObjectActuator_linear_velocity_set(PointerRNA *ptr, const float values[3])
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->linVelocity)[i] = values[i];
	}
}

void EditObjectActuator_angular_velocity_get(PointerRNA *ptr, float values[3])
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->angVelocity)[i]);
	}
}

void EditObjectActuator_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->angVelocity)[i] = values[i];
	}
}

int EditObjectActuator_use_local_linear_velocity_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->localflag) & 2) != 0);
}

void EditObjectActuator_use_local_linear_velocity_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->localflag |= 2;
	else data->localflag &= ~2;
}

int EditObjectActuator_use_local_angular_velocity_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->localflag) & 4) != 0);
}

void EditObjectActuator_use_local_angular_velocity_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->localflag |= 4;
	else data->localflag &= ~4;
}

int EditObjectActuator_use_replace_display_mesh_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return !(((data->flag) & 2) != 0);
}

void EditObjectActuator_use_replace_display_mesh_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	if (!value) data->flag |= 2;
	else data->flag &= ~2;
}

int EditObjectActuator_use_replace_physics_mesh_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void EditObjectActuator_use_replace_physics_mesh_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int EditObjectActuator_use_3d_tracking_get(PointerRNA *ptr)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void EditObjectActuator_use_3d_tracking_set(PointerRNA *ptr, int value)
{
	bEditObjectActuator *data = (bEditObjectActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SceneActuator_mode_get(PointerRNA *ptr)
{
	bSceneActuator *data = (bSceneActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void SceneActuator_mode_set(PointerRNA *ptr, int value)
{
	bSceneActuator *data = (bSceneActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

PointerRNA SceneActuator_camera_get(PointerRNA *ptr)
{
	bSceneActuator *data = (bSceneActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->camera);
}

void SceneActuator_camera_set(PointerRNA *ptr, PointerRNA value)
{
	bSceneActuator *data = (bSceneActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->camera = value.data;
}

PointerRNA SceneActuator_scene_get(PointerRNA *ptr)
{
	bSceneActuator *data = (bSceneActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Scene, data->scene);
}

void SceneActuator_scene_set(PointerRNA *ptr, PointerRNA value)
{
	bSceneActuator *data = (bSceneActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->scene = value.data;
}

int RandomActuator_seed_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->seed);
}

void RandomActuator_seed_set(PointerRNA *ptr, int value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->seed = CLAMPIS(value, 0, 300000);
}

void RandomActuator_property_get(PointerRNA *ptr, char *value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->propname, 64);
}

int RandomActuator_property_length(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->propname);
}

void RandomActuator_property_set(PointerRNA *ptr, const char *value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->propname, value, 64);
}

int RandomActuator_distribution_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->distribution);
}

void RandomActuator_distribution_set(PointerRNA *ptr, int value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->distribution = value;
}

int RandomActuator_use_always_true_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (((data->int_arg_1) & 1) != 0);
}

void RandomActuator_use_always_true_set(PointerRNA *ptr, int value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->int_arg_1 |= 1;
	else data->int_arg_1 &= ~1;
}

float RandomActuator_chance_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->float_arg_1);
}

void RandomActuator_chance_set(PointerRNA *ptr, float value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->float_arg_1 = CLAMPIS(value, 0.0f, 1.0f);
}

int RandomActuator_int_value_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->int_arg_1);
}

void RandomActuator_int_value_set(PointerRNA *ptr, int value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->int_arg_1 = value;
}

int RandomActuator_int_min_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->int_arg_1);
}

void RandomActuator_int_min_set(PointerRNA *ptr, int value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->int_arg_1 = CLAMPIS(value, -1000, 1000);
}

int RandomActuator_int_max_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->int_arg_2);
}

void RandomActuator_int_max_set(PointerRNA *ptr, int value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->int_arg_2 = CLAMPIS(value, -1000, 1000);
}

float RandomActuator_int_mean_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->float_arg_1);
}

void RandomActuator_int_mean_set(PointerRNA *ptr, float value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->float_arg_1 = CLAMPIS(value, 0.0099999998f, 100.0f);
}

float RandomActuator_float_value_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->float_arg_1);
}

void RandomActuator_float_value_set(PointerRNA *ptr, float value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->float_arg_1 = CLAMPIS(value, 0.0f, 1.0f);
}

float RandomActuator_float_min_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->float_arg_1);
}

void RandomActuator_float_min_set(PointerRNA *ptr, float value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->float_arg_1 = CLAMPIS(value, -1000.0f, 1000.0f);
}

float RandomActuator_float_max_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->float_arg_2);
}

void RandomActuator_float_max_set(PointerRNA *ptr, float value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->float_arg_2 = CLAMPIS(value, -1000.0f, 1000.0f);
}

float RandomActuator_float_mean_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->float_arg_1);
}

void RandomActuator_float_mean_set(PointerRNA *ptr, float value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->float_arg_1 = CLAMPIS(value, -1000.0f, 1000.0f);
}

float RandomActuator_standard_derivation_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->float_arg_2);
}

void RandomActuator_standard_derivation_set(PointerRNA *ptr, float value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->float_arg_2 = CLAMPIS(value, -1000.0f, 1000.0f);
}

float RandomActuator_half_life_time_get(PointerRNA *ptr)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->float_arg_1);
}

void RandomActuator_half_life_time_set(PointerRNA *ptr, float value)
{
	bRandomActuator *data = (bRandomActuator *)(((bActuator *)ptr->data)->data);
	data->float_arg_1 = CLAMPIS(value, -1000.0f, 1000.0f);
}

void MessageActuator_to_property_get(PointerRNA *ptr, char *value)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->toPropName, 64);
}

int MessageActuator_to_property_length(PointerRNA *ptr)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->toPropName);
}

void MessageActuator_to_property_set(PointerRNA *ptr, const char *value)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->toPropName, value, 64);
}

void MessageActuator_subject_get(PointerRNA *ptr, char *value)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subject, 64);
}

int MessageActuator_subject_length(PointerRNA *ptr)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->subject);
}

void MessageActuator_subject_set(PointerRNA *ptr, const char *value)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->subject, value, 64);
}

int MessageActuator_body_type_get(PointerRNA *ptr)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->bodyType);
}

void MessageActuator_body_type_set(PointerRNA *ptr, int value)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	data->bodyType = value;
}

void MessageActuator_body_message_get(PointerRNA *ptr, char *value)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->body, 64);
}

int MessageActuator_body_message_length(PointerRNA *ptr)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->body);
}

void MessageActuator_body_message_set(PointerRNA *ptr, const char *value)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->body, value, 64);
}

void MessageActuator_body_property_get(PointerRNA *ptr, char *value)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->body, 64);
}

int MessageActuator_body_property_length(PointerRNA *ptr)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->body);
}

void MessageActuator_body_property_set(PointerRNA *ptr, const char *value)
{
	bMessageActuator *data = (bMessageActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->body, value, 64);
}

int GameActuator_mode_get(PointerRNA *ptr)
{
	bGameActuator *data = (bGameActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void GameActuator_mode_set(PointerRNA *ptr, int value)
{
	bGameActuator *data = (bGameActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

void GameActuator_filename_get(PointerRNA *ptr, char *value)
{
	bGameActuator *data = (bGameActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy(value, data->filename, 64);
}

int GameActuator_filename_length(PointerRNA *ptr)
{
	bGameActuator *data = (bGameActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->filename);
}

void GameActuator_filename_set(PointerRNA *ptr, const char *value)
{
	bGameActuator *data = (bGameActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy(data->filename, value, 64);
}

int VisibilityActuator_use_visible_get(PointerRNA *ptr)
{
	bVisibilityActuator *data = (bVisibilityActuator *)(((bActuator *)ptr->data)->data);
	return !(((data->flag) & 1) != 0);
}

void VisibilityActuator_use_visible_set(PointerRNA *ptr, int value)
{
	bVisibilityActuator *data = (bVisibilityActuator *)(((bActuator *)ptr->data)->data);
	if (!value) data->flag |= 1;
	else data->flag &= ~1;
}

int VisibilityActuator_use_occlusion_get(PointerRNA *ptr)
{
	bVisibilityActuator *data = (bVisibilityActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void VisibilityActuator_use_occlusion_set(PointerRNA *ptr, int value)
{
	bVisibilityActuator *data = (bVisibilityActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int VisibilityActuator_apply_to_children_get(PointerRNA *ptr)
{
	bVisibilityActuator *data = (bVisibilityActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void VisibilityActuator_apply_to_children_set(PointerRNA *ptr, int value)
{
	bVisibilityActuator *data = (bVisibilityActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int Filter2DActuator_mode_get(PointerRNA *ptr)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void Filter2DActuator_mode_set(PointerRNA *ptr, int value)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

PointerRNA Filter2DActuator_glsl_shader_get(PointerRNA *ptr)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Text, data->text);
}

void Filter2DActuator_glsl_shader_set(PointerRNA *ptr, PointerRNA value)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->text = value.data;
}

int Filter2DActuator_filter_pass_get(PointerRNA *ptr)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->int_arg);
}

void Filter2DActuator_filter_pass_set(PointerRNA *ptr, int value)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	data->int_arg = CLAMPIS(value, 0, 99);
}

float Filter2DActuator_motion_blur_factor_get(PointerRNA *ptr)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->float_arg);
}

void Filter2DActuator_motion_blur_factor_set(PointerRNA *ptr, float value)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	data->float_arg = CLAMPIS(value, 0.0f, 1.0f);
}

int Filter2DActuator_use_motion_blur_get(PointerRNA *ptr)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	return !(((data->flag) & 1) != 0);
}

void Filter2DActuator_use_motion_blur_set(PointerRNA *ptr, int value)
{
	bTwoDFilterActuator *data = (bTwoDFilterActuator *)(((bActuator *)ptr->data)->data);
	if (!value) data->flag |= 1;
	else data->flag &= ~1;
}

int ParentActuator_mode_get(PointerRNA *ptr)
{
	bParentActuator *data = (bParentActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void ParentActuator_mode_set(PointerRNA *ptr, int value)
{
	bParentActuator *data = (bParentActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

PointerRNA ParentActuator_object_get(PointerRNA *ptr)
{
	bParentActuator *data = (bParentActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void ParentActuator_object_set(PointerRNA *ptr, PointerRNA value)
{
	bParentActuator *data = (bParentActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

int ParentActuator_use_compound_get(PointerRNA *ptr)
{
	bParentActuator *data = (bParentActuator *)(((bActuator *)ptr->data)->data);
	return !(((data->flag) & 1) != 0);
}

void ParentActuator_use_compound_set(PointerRNA *ptr, int value)
{
	bParentActuator *data = (bParentActuator *)(((bActuator *)ptr->data)->data);
	if (!value) data->flag |= 1;
	else data->flag &= ~1;
}

int ParentActuator_use_ghost_get(PointerRNA *ptr)
{
	bParentActuator *data = (bParentActuator *)(((bActuator *)ptr->data)->data);
	return !(((data->flag) & 2) != 0);
}

void ParentActuator_use_ghost_set(PointerRNA *ptr, int value)
{
	bParentActuator *data = (bParentActuator *)(((bActuator *)ptr->data)->data);
	if (!value) data->flag |= 2;
	else data->flag &= ~2;
}

int StateActuator_operation_get(PointerRNA *ptr)
{
	bStateActuator *data = (bStateActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void StateActuator_operation_set(PointerRNA *ptr, int value)
{
	bStateActuator *data = (bStateActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

void StateActuator_states_get(PointerRNA *ptr, int values[30])
{
	bStateActuator *data = (bStateActuator *)(((bActuator *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 30; i++) {
		values[i] = ((data->mask & (1u << i)) != 0);
	}
}

void StateActuator_states_set(PointerRNA *ptr, const int values[30])
{
	rna_StateActuator_state_set(ptr, values);
}

int ArmatureActuator_mode_get(PointerRNA *ptr)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void ArmatureActuator_mode_set(PointerRNA *ptr, int value)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

void ArmatureActuator_bone_get(PointerRNA *ptr, char *value)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->posechannel, 64);
}

int ArmatureActuator_bone_length(PointerRNA *ptr)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->posechannel);
}

void ArmatureActuator_bone_set(PointerRNA *ptr, const char *value)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->posechannel, value, 64);
}

void ArmatureActuator_constraint_get(PointerRNA *ptr, char *value)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->constraint, 64);
}

int ArmatureActuator_constraint_length(PointerRNA *ptr)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	return strlen(data->constraint);
}

void ArmatureActuator_constraint_set(PointerRNA *ptr, const char *value)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	BLI_strncpy_utf8(data->constraint, value, 64);
}

PointerRNA ArmatureActuator_target_get(PointerRNA *ptr)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->target);
}

void ArmatureActuator_target_set(PointerRNA *ptr, PointerRNA value)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->target = value.data;
}

PointerRNA ArmatureActuator_secondary_target_get(PointerRNA *ptr)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->subtarget);
}

void ArmatureActuator_secondary_target_set(PointerRNA *ptr, PointerRNA value)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->subtarget = value.data;
}

float ArmatureActuator_weight_get(PointerRNA *ptr)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->weight);
}

void ArmatureActuator_weight_set(PointerRNA *ptr, float value)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

float ArmatureActuator_influence_get(PointerRNA *ptr)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->influence);
}

void ArmatureActuator_influence_set(PointerRNA *ptr, float value)
{
	bArmatureActuator *data = (bArmatureActuator *)(((bActuator *)ptr->data)->data);
	data->influence = CLAMPIS(value, 0.0f, 1.0f);
}

int SteeringActuator_mode_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void SteeringActuator_mode_set(PointerRNA *ptr, int value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

float SteeringActuator_velocity_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->velocity);
}

void SteeringActuator_velocity_set(PointerRNA *ptr, float value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	data->velocity = CLAMPIS(value, 0.0f, 1000.0f);
}

float SteeringActuator_acceleration_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->acceleration);
}

void SteeringActuator_acceleration_set(PointerRNA *ptr, float value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	data->acceleration = CLAMPIS(value, 0.0f, 1000.0f);
}

float SteeringActuator_turn_speed_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->turnspeed);
}

void SteeringActuator_turn_speed_set(PointerRNA *ptr, float value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	data->turnspeed = CLAMPIS(value, 0.0f, 720.0f);
}

float SteeringActuator_distance_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->dist);
}

void SteeringActuator_distance_set(PointerRNA *ptr, float value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	data->dist = CLAMPIS(value, 0.0f, 1000.0f);
}

PointerRNA SteeringActuator_target_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->target);
}

void SteeringActuator_target_set(PointerRNA *ptr, PointerRNA value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->target = value.data;
}

int SteeringActuator_self_terminated_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void SteeringActuator_self_terminated_set(PointerRNA *ptr, int value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SteeringActuator_show_visualization_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void SteeringActuator_show_visualization_set(PointerRNA *ptr, int value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SteeringActuator_update_period_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->updateTime);
}

void SteeringActuator_update_period_set(PointerRNA *ptr, int value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	data->updateTime = value;
}

PointerRNA SteeringActuator_navmesh_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->navmesh);
}

void SteeringActuator_navmesh_set(PointerRNA *ptr, PointerRNA value)
{
	rna_SteeringActuator_navmesh_set(ptr, value);
}

int SteeringActuator_facing_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void SteeringActuator_facing_set(PointerRNA *ptr, int value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SteeringActuator_facing_axis_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->facingaxis);
}

void SteeringActuator_facing_axis_set(PointerRNA *ptr, int value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	data->facingaxis = value;
}

int SteeringActuator_normal_up_get(PointerRNA *ptr)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void SteeringActuator_normal_up_set(PointerRNA *ptr, int value)
{
	bSteeringActuator *data = (bSteeringActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int MouseActuator_mode_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->type);
}

void MouseActuator_mode_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->type = value;
}

int MouseActuator_visible_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void MouseActuator_visible_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MouseActuator_use_axis_x_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void MouseActuator_use_axis_x_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int MouseActuator_use_axis_y_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void MouseActuator_use_axis_y_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int MouseActuator_reset_x_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void MouseActuator_reset_x_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int MouseActuator_reset_y_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void MouseActuator_reset_y_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MouseActuator_local_x_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void MouseActuator_local_x_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int MouseActuator_local_y_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (((data->flag) & 64) != 0);
}

void MouseActuator_local_y_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

float MouseActuator_threshold_x_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->threshold[0]);
}

void MouseActuator_threshold_x_set(PointerRNA *ptr, float value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->threshold[0] = value;
}

float MouseActuator_threshold_y_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->threshold[1]);
}

void MouseActuator_threshold_y_set(PointerRNA *ptr, float value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->threshold[1] = value;
}

int MouseActuator_object_axis_x_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->object_axis[0]);
}

void MouseActuator_object_axis_x_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->object_axis[0] = value;
}

int MouseActuator_object_axis_y_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (int)(data->object_axis[1]);
}

void MouseActuator_object_axis_y_set(PointerRNA *ptr, int value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->object_axis[1] = value;
}

float MouseActuator_sensitivity_x_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sensitivity[0]);
}

void MouseActuator_sensitivity_x_set(PointerRNA *ptr, float value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->sensitivity[0] = value;
}

float MouseActuator_sensitivity_y_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->sensitivity[1]);
}

void MouseActuator_sensitivity_y_set(PointerRNA *ptr, float value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->sensitivity[1] = value;
}

float MouseActuator_min_x_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->limit_x[0]);
}

void MouseActuator_min_x_set(PointerRNA *ptr, float value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->limit_x[0] = value;
}

float MouseActuator_max_x_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->limit_x[1]);
}

void MouseActuator_max_x_set(PointerRNA *ptr, float value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->limit_x[1] = value;
}

float MouseActuator_min_y_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->limit_y[0]);
}

void MouseActuator_min_y_set(PointerRNA *ptr, float value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->limit_y[0] = value;
}

float MouseActuator_max_y_get(PointerRNA *ptr)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	return (float)(data->limit_y[1]);
}

void MouseActuator_max_y_set(PointerRNA *ptr, float value)
{
	bMouseActuator *data = (bMouseActuator *)(((bActuator *)ptr->data)->data);
	data->limit_y[1] = value;
}

void Actuator_link(struct bActuator *_self, struct bController *controller)
{
	rna_Actuator_link(_self, controller);
}

void Actuator_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bActuator *_self;
	struct bController *controller;
	char *_data;
	
	_self = (struct bActuator *)_ptr->data;
	_data = (char *)_parms->data;
	controller = *((struct bController **)_data);
	
	rna_Actuator_link(_self, controller);
}

void Actuator_unlink(struct bActuator *_self, struct bController *controller)
{
	rna_Actuator_unlink(_self, controller);
}

void Actuator_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bActuator *_self;
	struct bController *controller;
	char *_data;
	
	_self = (struct bActuator *)_ptr->data;
	_data = (char *)_parms->data;
	controller = *((struct bController **)_data);
	
	rna_Actuator_unlink(_self, controller);
}

/* Repeated prototypes to detect errors */

void rna_Actuator_link(struct bActuator *_self, struct bController *controller);
void rna_Actuator_unlink(struct bActuator *_self, struct bController *controller);



















/* Actuator */
CollectionPropertyRNA rna_Actuator_rna_properties = {
	{(PropertyRNA *)&rna_Actuator_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Actuator_rna_properties_begin, Actuator_rna_properties_next, Actuator_rna_properties_end, Actuator_rna_properties_get, NULL, NULL, Actuator_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Actuator_rna_type = {
	{(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Actuator_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Actuator_name = {
	{(PropertyRNA *)&rna_Actuator_type, (PropertyRNA *)&rna_Actuator_rna_type,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Actuator_name_get, Actuator_name_length, Actuator_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_Actuator_type_items[19] = {
	{15, "ACTION", 0, "Action", ""},
	{23, "ARMATURE", 0, "Armature", ""},
	{3, "CAMERA", 0, "Camera", ""},
	{9, "CONSTRAINT", 0, "Constraint", ""},
	{10, "EDIT_OBJECT", 0, "Edit Object", ""},
	{19, "FILTER_2D", 0, "Filter 2D", ""},
	{17, "GAME", 0, "Game", ""},
	{14, "MESSAGE", 0, "Message", ""},
	{25, "MOUSE", 0, "Mouse", ""},
	{0, "MOTION", 0, "Motion", ""},
	{20, "PARENT", 0, "Parent", ""},
	{6, "PROPERTY", 0, "Property", ""},
	{13, "RANDOM", 0, "Random", ""},
	{11, "SCENE", 0, "Scene", ""},
	{5, "SOUND", 0, "Sound", ""},
	{22, "STATE", 0, "State", ""},
	{18, "VISIBILITY", 0, "Visibility", ""},
	{24, "STEERING", 0, "Steering", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Actuator_type = {
	{(PropertyRNA *)&rna_Actuator_pin, (PropertyRNA *)&rna_Actuator_name,
	-1, "type", 1, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Actuator_type_get, Actuator_type_set, rna_Actuator_type_itemf, NULL, NULL, NULL, rna_Actuator_type_items, 18, 0
};

BoolPropertyRNA rna_Actuator_pin = {
	{(PropertyRNA *)&rna_Actuator_show_expanded, (PropertyRNA *)&rna_Actuator_type,
	-1, "pin", 4099, "Pinned",
	"Display when not linked to a visible states controller",
	42, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Actuator_pin_get, Actuator_pin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Actuator_show_expanded = {
	{(PropertyRNA *)&rna_Actuator_active, (PropertyRNA *)&rna_Actuator_pin,
	-1, "show_expanded", 4099, "Expanded",
	"Set actuator expanded in the user interface",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Actuator_show_expanded_get, Actuator_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Actuator_active = {
	{NULL, (PropertyRNA *)&rna_Actuator_show_expanded,
	-1, "active", 3, "Active",
	"Set the active state of the actuator",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Actuator_active_get, Actuator_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Actuator_link_controller = {
	{NULL, NULL,
	-1, "controller", 8388612, "",
	"Controller to link to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Controller
};

FunctionRNA rna_Actuator_link_func = {
	{(FunctionRNA *)&rna_Actuator_unlink_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Actuator_link_controller, (PropertyRNA *)&rna_Actuator_link_controller}},
	"link", 0, "Link the actuator to a controller",
	Actuator_link_call,
	NULL
};

PointerPropertyRNA rna_Actuator_unlink_controller = {
	{NULL, NULL,
	-1, "controller", 8388612, "",
	"Controller to unlink from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Controller
};

FunctionRNA rna_Actuator_unlink_func = {
	{NULL, (FunctionRNA *)&rna_Actuator_link_func,
	NULL,
	{(PropertyRNA *)&rna_Actuator_unlink_controller, (PropertyRNA *)&rna_Actuator_unlink_controller}},
	"unlink", 0, "Unlink the actuator from a controller",
	Actuator_unlink_call,
	NULL
};

StructRNA RNA_Actuator = {
	{(ContainerRNA *)&RNA_ActionActuator, (ContainerRNA *)&RNA_MotionPathVert,
	NULL,
	{(PropertyRNA *)&rna_Actuator_rna_properties, (PropertyRNA *)&rna_Actuator_active}},
	"Actuator", NULL, NULL, 4, "Actuator",
	"Actuator to apply actions in the game engine",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	NULL,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Actuator_link_func, (FunctionRNA *)&rna_Actuator_unlink_func}
};

/* Action Actuator */
static EnumPropertyItem rna_ActionActuator_play_mode_items[7] = {
	{0, "PLAY", 0, "Play", ""},
	{1, "PINGPONG", 0, "Ping Pong", ""},
	{2, "FLIPPER", 0, "Flipper", ""},
	{3, "LOOPSTOP", 0, "Loop Stop", ""},
	{4, "LOOPEND", 0, "Loop End", ""},
	{6, "PROPERTY", 0, "Property", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ActionActuator_play_mode = {
	{(PropertyRNA *)&rna_ActionActuator_action, NULL,
	-1, "play_mode", 3, "Action Type",
	"Action playback type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_play_mode_get, ActionActuator_play_mode_set, NULL, NULL, NULL, NULL, rna_ActionActuator_play_mode_items, 6, 0
};

PointerPropertyRNA rna_ActionActuator_action = {
	{(PropertyRNA *)&rna_ActionActuator_use_continue_last_frame, (PropertyRNA *)&rna_ActionActuator_play_mode,
	-1, "action", 8388673, "Action",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_action_get, ActionActuator_action_set, NULL, NULL,&RNA_Action
};

BoolPropertyRNA rna_ActionActuator_use_continue_last_frame = {
	{(PropertyRNA *)&rna_ActionActuator_property, (PropertyRNA *)&rna_ActionActuator_action,
	-1, "use_continue_last_frame", 3, "Continue",
	"Restore last frame when switching on/off, otherwise play from the start each time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_use_continue_last_frame_get, ActionActuator_use_continue_last_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ActionActuator_property = {
	{(PropertyRNA *)&rna_ActionActuator_frame_start, (PropertyRNA *)&rna_ActionActuator_use_continue_last_frame,
	-1, "property", 262145, "Property",
	"Use this property to define the Action position",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_property_get, ActionActuator_property_length, ActionActuator_property_set, NULL, NULL, NULL, 64, ""
};

FloatPropertyRNA rna_ActionActuator_frame_start = {
	{(PropertyRNA *)&rna_ActionActuator_frame_end, (PropertyRNA *)&rna_ActionActuator_property,
	-1, "frame_start", 8195, "Start Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bActionActuator, sta), 4, NULL},
	ActionActuator_frame_start_get, ActionActuator_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 300000.0f, -FLT_MAX, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ActionActuator_frame_end = {
	{(PropertyRNA *)&rna_ActionActuator_frame_blend_in, (PropertyRNA *)&rna_ActionActuator_frame_start,
	-1, "frame_end", 8195, "End Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bActionActuator, end), 4, NULL},
	ActionActuator_frame_end_get, ActionActuator_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 300000.0f, -FLT_MAX, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

IntPropertyRNA rna_ActionActuator_frame_blend_in = {
	{(PropertyRNA *)&rna_ActionActuator_priority, (PropertyRNA *)&rna_ActionActuator_frame_end,
	-1, "frame_blend_in", 8195, "Blendin",
	"Number of frames of motion blending",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bActionActuator, blendin), 1, NULL},
	ActionActuator_frame_blend_in_get, ActionActuator_frame_blend_in_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_ActionActuator_priority = {
	{(PropertyRNA *)&rna_ActionActuator_layer, (PropertyRNA *)&rna_ActionActuator_frame_blend_in,
	-1, "priority", 8195, "Priority",
	"Execution priority - lower numbers will override actions with higher numbers (with 2 or more actions at once, the overriding channels must be lower in the stack)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bActionActuator, priority), 1, NULL},
	ActionActuator_priority_get, ActionActuator_priority_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

IntPropertyRNA rna_ActionActuator_layer = {
	{(PropertyRNA *)&rna_ActionActuator_layer_weight, (PropertyRNA *)&rna_ActionActuator_priority,
	-1, "layer", 8195, "Layer",
	"The animation layer to play the action on",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bActionActuator, layer), 1, NULL},
	ActionActuator_layer_get, ActionActuator_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32766, 0, 32766, 1, 0, NULL
};

FloatPropertyRNA rna_ActionActuator_layer_weight = {
	{(PropertyRNA *)&rna_ActionActuator_frame_property, (PropertyRNA *)&rna_ActionActuator_layer,
	-1, "layer_weight", 8195, "Layer Weight",
	"How much of the previous layer to blend into this one",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bActionActuator, layer_weight), 4, NULL},
	ActionActuator_layer_weight_get, ActionActuator_layer_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_ActionActuator_frame_property = {
	{(PropertyRNA *)&rna_ActionActuator_use_additive, (PropertyRNA *)&rna_ActionActuator_layer_weight,
	-1, "frame_property", 262145, "Frame Property",
	"Assign the action\'s current frame number to this property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_frame_property_get, ActionActuator_frame_property_length, ActionActuator_frame_property_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_ActionActuator_use_additive = {
	{(PropertyRNA *)&rna_ActionActuator_use_force, (PropertyRNA *)&rna_ActionActuator_frame_property,
	-1, "use_additive", 3, "Add",
	"Action is added to the current loc/rot/scale in global or local coordinate according to Local flag",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_use_additive_get, ActionActuator_use_additive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionActuator_use_force = {
	{(PropertyRNA *)&rna_ActionActuator_use_local, (PropertyRNA *)&rna_ActionActuator_use_additive,
	-1, "use_force", 3, "Force",
	"Apply Action as a global or local force depending on the local option (dynamic objects only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_use_force_get, ActionActuator_use_force_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionActuator_use_local = {
	{(PropertyRNA *)&rna_ActionActuator_apply_to_children, (PropertyRNA *)&rna_ActionActuator_use_force,
	-1, "use_local", 3, "L",
	"Let the Action act in local coordinates, used in Force and Add mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_use_local_get, ActionActuator_use_local_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionActuator_apply_to_children = {
	{(PropertyRNA *)&rna_ActionActuator_blend_mode, (PropertyRNA *)&rna_ActionActuator_use_local,
	-1, "apply_to_children", 3, "Child",
	"Update Action on all children Objects as well",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_apply_to_children_get, ActionActuator_apply_to_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ActionActuator_blend_mode_items[3] = {
	{0, "BLEND", 0, "Blend", ""},
	{1, "ADD", 0, "Add", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ActionActuator_blend_mode = {
	{NULL, (PropertyRNA *)&rna_ActionActuator_apply_to_children,
	-1, "blend_mode", 3, "Blend Mode",
	"How this layer is blended with previous layers",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActionActuator_blend_mode_get, ActionActuator_blend_mode_set, NULL, NULL, NULL, NULL, rna_ActionActuator_blend_mode_items, 2, 0
};

StructRNA RNA_ActionActuator = {
	{(ContainerRNA *)&RNA_ObjectActuator, (ContainerRNA *)&RNA_Actuator,
	NULL,
	{(PropertyRNA *)&rna_ActionActuator_play_mode, (PropertyRNA *)&rna_ActionActuator_blend_mode}},
	"ActionActuator", NULL, NULL, 4, "Action Actuator",
	"Actuator to control the object movement",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Actuator */
static EnumPropertyItem rna_ObjectActuator_mode_items[4] = {
	{0, "OBJECT_NORMAL", 0, "Simple Motion", ""},
	{1, "OBJECT_SERVO", 0, "Servo Control", ""},
	{2, "OBJECT_CHARACTER", 0, "Character Motion", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ObjectActuator_mode = {
	{(PropertyRNA *)&rna_ObjectActuator_reference_object, NULL,
	-1, "mode", 3, "Motion Type",
	"Specify the motion system",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_mode_get, ObjectActuator_mode_set, NULL, NULL, NULL, NULL, rna_ObjectActuator_mode_items, 3, 0
};

PointerPropertyRNA rna_ObjectActuator_reference_object = {
	{(PropertyRNA *)&rna_ObjectActuator_damping, (PropertyRNA *)&rna_ObjectActuator_mode,
	-1, "reference_object", 8388609, "Reference Object",
	"Reference object for velocity calculation, leave empty for world reference",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_reference_object_get, ObjectActuator_reference_object_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ObjectActuator_damping = {
	{(PropertyRNA *)&rna_ObjectActuator_proportional_coefficient, (PropertyRNA *)&rna_ObjectActuator_reference_object,
	-1, "damping", 8195, "Damping Frames",
	"Number of frames to reach the target velocity",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, damping), 1, NULL},
	ObjectActuator_damping_get, ObjectActuator_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, -32768, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_ObjectActuator_proportional_coefficient = {
	{(PropertyRNA *)&rna_ObjectActuator_integral_coefficient, (PropertyRNA *)&rna_ObjectActuator_damping,
	-1, "proportional_coefficient", 8195, "Proportional Coefficient",
	"Typical value is 60x integral coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, forcerot[0]), 4, NULL},
	ObjectActuator_proportional_coefficient_get, ObjectActuator_proportional_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 200.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ObjectActuator_integral_coefficient = {
	{(PropertyRNA *)&rna_ObjectActuator_derivate_coefficient, (PropertyRNA *)&rna_ObjectActuator_proportional_coefficient,
	-1, "integral_coefficient", 3, "Integral Coefficient",
	"Low value (0.01) for slow response, high value (0.5) for fast response",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_integral_coefficient_get, ObjectActuator_integral_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ObjectActuator_derivate_coefficient = {
	{(PropertyRNA *)&rna_ObjectActuator_force_max_x, (PropertyRNA *)&rna_ObjectActuator_integral_coefficient,
	-1, "derivate_coefficient", 8195, "Derivate Coefficient",
	"Not required, high values can cause instability",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, forcerot[2]), 4, NULL},
	ObjectActuator_derivate_coefficient_get, ObjectActuator_derivate_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ObjectActuator_force_max_x = {
	{(PropertyRNA *)&rna_ObjectActuator_force_min_x, (PropertyRNA *)&rna_ObjectActuator_derivate_coefficient,
	-1, "force_max_x", 8195, "Max",
	"Upper limit for X force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, dloc[0]), 4, NULL},
	ObjectActuator_force_max_x_get, ObjectActuator_force_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ObjectActuator_force_min_x = {
	{(PropertyRNA *)&rna_ObjectActuator_force_max_y, (PropertyRNA *)&rna_ObjectActuator_force_max_x,
	-1, "force_min_x", 8195, "Min",
	"Lower limit for X force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, drot[0]), 4, NULL},
	ObjectActuator_force_min_x_get, ObjectActuator_force_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ObjectActuator_force_max_y = {
	{(PropertyRNA *)&rna_ObjectActuator_force_min_y, (PropertyRNA *)&rna_ObjectActuator_force_min_x,
	-1, "force_max_y", 8195, "Max",
	"Upper limit for Y force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, dloc[1]), 4, NULL},
	ObjectActuator_force_max_y_get, ObjectActuator_force_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ObjectActuator_force_min_y = {
	{(PropertyRNA *)&rna_ObjectActuator_force_max_z, (PropertyRNA *)&rna_ObjectActuator_force_max_y,
	-1, "force_min_y", 8195, "Min",
	"Lower limit for Y force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, drot[1]), 4, NULL},
	ObjectActuator_force_min_y_get, ObjectActuator_force_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ObjectActuator_force_max_z = {
	{(PropertyRNA *)&rna_ObjectActuator_force_min_z, (PropertyRNA *)&rna_ObjectActuator_force_min_y,
	-1, "force_max_z", 8195, "Max",
	"Upper limit for Z force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, dloc[2]), 4, NULL},
	ObjectActuator_force_max_z_get, ObjectActuator_force_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ObjectActuator_force_min_z = {
	{(PropertyRNA *)&rna_ObjectActuator_offset_location, (PropertyRNA *)&rna_ObjectActuator_force_max_z,
	-1, "force_min_z", 8195, "Min",
	"Lower limit for Z force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, drot[2]), 4, NULL},
	ObjectActuator_force_min_z_get, ObjectActuator_force_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

static float rna_ObjectActuator_offset_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ObjectActuator_offset_location = {
	{(PropertyRNA *)&rna_ObjectActuator_offset_rotation, (PropertyRNA *)&rna_ObjectActuator_force_min_z,
	-1, "offset_location", 8195, "Loc",
	"Location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, dloc), 4, NULL},
	NULL, NULL, ObjectActuator_offset_location_get, ObjectActuator_offset_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_ObjectActuator_offset_location_default
};

static float rna_ObjectActuator_offset_rotation_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ObjectActuator_offset_rotation = {
	{(PropertyRNA *)&rna_ObjectActuator_force, (PropertyRNA *)&rna_ObjectActuator_offset_location,
	-1, "offset_rotation", 8195, "Rot",
	"Rotation",
	0, "*",
	PROP_FLOAT, PROP_EULER | PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, drot), 4, NULL},
	NULL, NULL, ObjectActuator_offset_rotation_get, ObjectActuator_offset_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_ObjectActuator_offset_rotation_default
};

static float rna_ObjectActuator_force_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ObjectActuator_force = {
	{(PropertyRNA *)&rna_ObjectActuator_torque, (PropertyRNA *)&rna_ObjectActuator_offset_rotation,
	-1, "force", 8195, "Force",
	"Force",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, forceloc), 4, NULL},
	NULL, NULL, ObjectActuator_force_get, ObjectActuator_force_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_ObjectActuator_force_default
};

static float rna_ObjectActuator_torque_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ObjectActuator_torque = {
	{(PropertyRNA *)&rna_ObjectActuator_linear_velocity, (PropertyRNA *)&rna_ObjectActuator_force,
	-1, "torque", 8195, "Torque",
	"Torque",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, forcerot), 4, NULL},
	NULL, NULL, ObjectActuator_torque_get, ObjectActuator_torque_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_ObjectActuator_torque_default
};

static float rna_ObjectActuator_linear_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ObjectActuator_linear_velocity = {
	{(PropertyRNA *)&rna_ObjectActuator_angular_velocity, (PropertyRNA *)&rna_ObjectActuator_torque,
	-1, "linear_velocity", 8195, "Linear Velocity",
	"Linear velocity (in Servo mode it sets the target relative linear velocity, it will be achieved by automatic application of force - Null velocity is a valid target)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, linearvelocity), 4, NULL},
	NULL, NULL, ObjectActuator_linear_velocity_get, ObjectActuator_linear_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_ObjectActuator_linear_velocity_default
};

static float rna_ObjectActuator_angular_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ObjectActuator_angular_velocity = {
	{(PropertyRNA *)&rna_ObjectActuator_use_local_location, (PropertyRNA *)&rna_ObjectActuator_linear_velocity,
	-1, "angular_velocity", 8195, "Angular Velocity",
	"Angular velocity",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 318767104, NULL, NULL,
	offsetof(bObjectActuator, angularvelocity), 4, NULL},
	NULL, NULL, ObjectActuator_angular_velocity_get, ObjectActuator_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_ObjectActuator_angular_velocity_default
};

BoolPropertyRNA rna_ObjectActuator_use_local_location = {
	{(PropertyRNA *)&rna_ObjectActuator_use_local_rotation, (PropertyRNA *)&rna_ObjectActuator_angular_velocity,
	-1, "use_local_location", 3, "L",
	"Location is defined in local coordinates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_local_location_get, ObjectActuator_use_local_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_local_rotation = {
	{(PropertyRNA *)&rna_ObjectActuator_use_local_force, (PropertyRNA *)&rna_ObjectActuator_use_local_location,
	-1, "use_local_rotation", 3, "L",
	"Rotation is defined in local coordinates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_local_rotation_get, ObjectActuator_use_local_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_local_force = {
	{(PropertyRNA *)&rna_ObjectActuator_use_local_torque, (PropertyRNA *)&rna_ObjectActuator_use_local_rotation,
	-1, "use_local_force", 3, "L",
	"Force is defined in local coordinates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_local_force_get, ObjectActuator_use_local_force_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_local_torque = {
	{(PropertyRNA *)&rna_ObjectActuator_use_local_linear_velocity, (PropertyRNA *)&rna_ObjectActuator_use_local_force,
	-1, "use_local_torque", 3, "L",
	"Torque is defined in local coordinates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_local_torque_get, ObjectActuator_use_local_torque_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_local_linear_velocity = {
	{(PropertyRNA *)&rna_ObjectActuator_use_local_angular_velocity, (PropertyRNA *)&rna_ObjectActuator_use_local_torque,
	-1, "use_local_linear_velocity", 3, "L",
	"Velocity is defined in local coordinates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_local_linear_velocity_get, ObjectActuator_use_local_linear_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_local_angular_velocity = {
	{(PropertyRNA *)&rna_ObjectActuator_use_add_linear_velocity, (PropertyRNA *)&rna_ObjectActuator_use_local_linear_velocity,
	-1, "use_local_angular_velocity", 3, "L",
	"Angular velocity is defined in local coordinates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_local_angular_velocity_get, ObjectActuator_use_local_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_add_linear_velocity = {
	{(PropertyRNA *)&rna_ObjectActuator_use_add_character_location, (PropertyRNA *)&rna_ObjectActuator_use_local_angular_velocity,
	-1, "use_add_linear_velocity", 3, "Add",
	"Toggles between ADD and SET linV",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_add_linear_velocity_get, ObjectActuator_use_add_linear_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_add_character_location = {
	{(PropertyRNA *)&rna_ObjectActuator_use_servo_limit_x, (PropertyRNA *)&rna_ObjectActuator_use_add_linear_velocity,
	-1, "use_add_character_location", 3, "Add",
	"Toggle between ADD and SET character location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_add_character_location_get, ObjectActuator_use_add_character_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_servo_limit_x = {
	{(PropertyRNA *)&rna_ObjectActuator_use_servo_limit_y, (PropertyRNA *)&rna_ObjectActuator_use_add_character_location,
	-1, "use_servo_limit_x", 3, "X",
	"Set limit to force along the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_servo_limit_x_get, ObjectActuator_use_servo_limit_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_servo_limit_y = {
	{(PropertyRNA *)&rna_ObjectActuator_use_servo_limit_z, (PropertyRNA *)&rna_ObjectActuator_use_servo_limit_x,
	-1, "use_servo_limit_y", 3, "Y",
	"Set limit to force along the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_servo_limit_y_get, ObjectActuator_use_servo_limit_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_servo_limit_z = {
	{(PropertyRNA *)&rna_ObjectActuator_use_character_jump, (PropertyRNA *)&rna_ObjectActuator_use_servo_limit_y,
	-1, "use_servo_limit_z", 3, "Z",
	"Set limit to force along the Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_servo_limit_z_get, ObjectActuator_use_servo_limit_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ObjectActuator_use_character_jump = {
	{NULL, (PropertyRNA *)&rna_ObjectActuator_use_servo_limit_z,
	-1, "use_character_jump", 3, "Jump",
	"Make the character jump using the settings in the physics properties",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ObjectActuator_use_character_jump_get, ObjectActuator_use_character_jump_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ObjectActuator = {
	{(ContainerRNA *)&RNA_CameraActuator, (ContainerRNA *)&RNA_ActionActuator,
	NULL,
	{(PropertyRNA *)&rna_ObjectActuator_mode, (PropertyRNA *)&rna_ObjectActuator_use_character_jump}},
	"ObjectActuator", NULL, NULL, 4, "Motion Actuator",
	"Actuator to control the object movement",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Camera Actuator */
PointerPropertyRNA rna_CameraActuator_object = {
	{(PropertyRNA *)&rna_CameraActuator_height, NULL,
	-1, "object", 8388609, "Camera Object",
	"Look at this Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	CameraActuator_object_get, CameraActuator_object_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_CameraActuator_height = {
	{(PropertyRNA *)&rna_CameraActuator_min, (PropertyRNA *)&rna_CameraActuator_object,
	-1, "height", 8195, "Height",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bCameraActuator, height), 4, NULL},
	CameraActuator_height_get, CameraActuator_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_CameraActuator_min = {
	{(PropertyRNA *)&rna_CameraActuator_max, (PropertyRNA *)&rna_CameraActuator_height,
	-1, "min", 8195, "Min",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bCameraActuator, min), 4, NULL},
	CameraActuator_min_get, CameraActuator_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_CameraActuator_max = {
	{(PropertyRNA *)&rna_CameraActuator_damping, (PropertyRNA *)&rna_CameraActuator_min,
	-1, "max", 8195, "Max",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bCameraActuator, max), 4, NULL},
	CameraActuator_max_get, CameraActuator_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_CameraActuator_damping = {
	{(PropertyRNA *)&rna_CameraActuator_axis, (PropertyRNA *)&rna_CameraActuator_max,
	-1, "damping", 8195, "Damping",
	"Strength of the constraint that drives the camera behind the target",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bCameraActuator, damping), 4, NULL},
	CameraActuator_damping_get, CameraActuator_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_CameraActuator_axis_items[5] = {
	{0, "POS_X", 0, "+X", "Camera tries to get behind the X axis"},
	{1, "POS_Y", 0, "+Y", "Camera tries to get behind the Y axis"},
	{3, "NEG_X", 0, "-X", "Camera tries to get behind the -X axis"},
	{4, "NEG_Y", 0, "-Y", "Camera tries to get behind the -Y axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CameraActuator_axis = {
	{NULL, (PropertyRNA *)&rna_CameraActuator_damping,
	-1, "axis", 3, "Axis",
	"Axis the Camera will try to get behind",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	CameraActuator_axis_get, CameraActuator_axis_set, NULL, NULL, NULL, NULL, rna_CameraActuator_axis_items, 4, 0
};

StructRNA RNA_CameraActuator = {
	{(ContainerRNA *)&RNA_SoundActuator, (ContainerRNA *)&RNA_ObjectActuator,
	NULL,
	{(PropertyRNA *)&rna_CameraActuator_object, (PropertyRNA *)&rna_CameraActuator_axis}},
	"CameraActuator", NULL, NULL, 4, "Camera Actuator",
	"",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sound */
PointerPropertyRNA rna_SoundActuator_sound = {
	{(PropertyRNA *)&rna_SoundActuator_mode, NULL,
	-1, "sound", 8388673, "sound",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SoundActuator_sound_get, SoundActuator_sound_set, NULL, NULL,&RNA_Sound
};

static EnumPropertyItem rna_SoundActuator_mode_items[7] = {
	{0, "PLAYSTOP", 0, "Play Stop", ""},
	{1, "PLAYEND", 0, "Play End", ""},
	{2, "LOOPSTOP", 0, "Loop Stop", ""},
	{3, "LOOPEND", 0, "Loop End", ""},
	{4, "LOOPBIDIRECTIONAL", 0, "Loop Bidirectional", ""},
	{5, "LOOPBIDIRECTIONALSTOP", 0, "Loop Bidirectional Stop", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SoundActuator_mode = {
	{(PropertyRNA *)&rna_SoundActuator_volume, (PropertyRNA *)&rna_SoundActuator_sound,
	-1, "mode", 3, "Play Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SoundActuator_mode_get, SoundActuator_mode_set, NULL, NULL, NULL, NULL, rna_SoundActuator_mode_items, 6, 0
};

FloatPropertyRNA rna_SoundActuator_volume = {
	{(PropertyRNA *)&rna_SoundActuator_pitch, (PropertyRNA *)&rna_SoundActuator_mode,
	-1, "volume", 8195, "Volume",
	"Initial volume of the sound",
	0, "Sound",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, volume), 4, NULL},
	SoundActuator_volume_get, SoundActuator_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SoundActuator_pitch = {
	{(PropertyRNA *)&rna_SoundActuator_gain_3d_min, (PropertyRNA *)&rna_SoundActuator_volume,
	-1, "pitch", 8195, "Pitch",
	"Pitch of the sound",
	0, "Sound",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, pitch), 4, NULL},
	SoundActuator_pitch_get, SoundActuator_pitch_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -12.0f, 12.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SoundActuator_gain_3d_min = {
	{(PropertyRNA *)&rna_SoundActuator_gain_3d_max, (PropertyRNA *)&rna_SoundActuator_pitch,
	-1, "gain_3d_min", 8195, "Minimum Gain",
	"The minimum gain of the sound, no matter how far it is away",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, sound3D.min_gain), 4, NULL},
	SoundActuator_gain_3d_min_get, SoundActuator_gain_3d_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SoundActuator_gain_3d_max = {
	{(PropertyRNA *)&rna_SoundActuator_distance_3d_reference, (PropertyRNA *)&rna_SoundActuator_gain_3d_min,
	-1, "gain_3d_max", 8195, "Maximum Gain",
	"The maximum gain of the sound, no matter how near it is",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, sound3D.max_gain), 4, NULL},
	SoundActuator_gain_3d_max_get, SoundActuator_gain_3d_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SoundActuator_distance_3d_reference = {
	{(PropertyRNA *)&rna_SoundActuator_distance_3d_max, (PropertyRNA *)&rna_SoundActuator_gain_3d_max,
	-1, "distance_3d_reference", 8195, "Reference Distance",
	"The distance where the sound has a gain of 1.0",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, sound3D.reference_distance), 4, NULL},
	SoundActuator_distance_3d_reference_get, SoundActuator_distance_3d_reference_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SoundActuator_distance_3d_max = {
	{(PropertyRNA *)&rna_SoundActuator_rolloff_factor_3d, (PropertyRNA *)&rna_SoundActuator_distance_3d_reference,
	-1, "distance_3d_max", 8195, "Maximum Distance",
	"The maximum distance at which you can hear the sound",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, sound3D.max_distance), 4, NULL},
	SoundActuator_distance_3d_max_get, SoundActuator_distance_3d_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SoundActuator_rolloff_factor_3d = {
	{(PropertyRNA *)&rna_SoundActuator_cone_outer_gain_3d, (PropertyRNA *)&rna_SoundActuator_distance_3d_max,
	-1, "rolloff_factor_3d", 8195, "Rolloff",
	"The influence factor on volume depending on distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, sound3D.rolloff_factor), 4, NULL},
	SoundActuator_rolloff_factor_3d_get, SoundActuator_rolloff_factor_3d_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SoundActuator_cone_outer_gain_3d = {
	{(PropertyRNA *)&rna_SoundActuator_cone_outer_angle_3d, (PropertyRNA *)&rna_SoundActuator_rolloff_factor_3d,
	-1, "cone_outer_gain_3d", 8195, "Cone Outer Gain",
	"The gain outside the outer cone (the gain in the outer cone will be interpolated between this value and the normal gain in the inner cone)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, sound3D.cone_outer_gain), 4, NULL},
	SoundActuator_cone_outer_gain_3d_get, SoundActuator_cone_outer_gain_3d_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SoundActuator_cone_outer_angle_3d = {
	{(PropertyRNA *)&rna_SoundActuator_cone_inner_angle_3d, (PropertyRNA *)&rna_SoundActuator_cone_outer_gain_3d,
	-1, "cone_outer_angle_3d", 8195, "Cone Outer Angle",
	"The angle of the outer cone",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, sound3D.cone_outer_angle), 4, NULL},
	SoundActuator_cone_outer_angle_3d_get, SoundActuator_cone_outer_angle_3d_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 6.2831854820f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SoundActuator_cone_inner_angle_3d = {
	{(PropertyRNA *)&rna_SoundActuator_use_sound_3d, (PropertyRNA *)&rna_SoundActuator_cone_outer_angle_3d,
	-1, "cone_inner_angle_3d", 8195, "Cone Inner Angle",
	"The angle of the inner cone",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSoundActuator, sound3D.cone_inner_angle), 4, NULL},
	SoundActuator_cone_inner_angle_3d_get, SoundActuator_cone_inner_angle_3d_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 6.2831854820f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_SoundActuator_use_sound_3d = {
	{NULL, (PropertyRNA *)&rna_SoundActuator_cone_inner_angle_3d,
	-1, "use_sound_3d", 3, "3D Sound",
	"Enable/Disable 3D Sound",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SoundActuator_use_sound_3d_get, SoundActuator_use_sound_3d_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SoundActuator = {
	{(ContainerRNA *)&RNA_PropertyActuator, (ContainerRNA *)&RNA_CameraActuator,
	NULL,
	{(PropertyRNA *)&rna_SoundActuator_sound, (PropertyRNA *)&rna_SoundActuator_use_sound_3d}},
	"SoundActuator", NULL, NULL, 4, "Sound",
	"Sound file",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Property Actuator */
static EnumPropertyItem rna_PropertyActuator_mode_items[6] = {
	{0, "ASSIGN", 0, "Assign", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "COPY", 0, "Copy", ""},
	{3, "TOGGLE", 0, "Toggle", "For bool/int/float/timer properties only"},
	{4, "LEVEL", 0, "Level", "For bool/int/float/timer properties only"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PropertyActuator_mode = {
	{(PropertyRNA *)&rna_PropertyActuator_property, NULL,
	-1, "mode", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertyActuator_mode_get, PropertyActuator_mode_set, NULL, NULL, NULL, NULL, rna_PropertyActuator_mode_items, 5, 0
};

StringPropertyRNA rna_PropertyActuator_property = {
	{(PropertyRNA *)&rna_PropertyActuator_value, (PropertyRNA *)&rna_PropertyActuator_mode,
	-1, "property", 262145, "Property",
	"The name of the property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertyActuator_property_get, PropertyActuator_property_length, PropertyActuator_property_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_PropertyActuator_value = {
	{(PropertyRNA *)&rna_PropertyActuator_object, (PropertyRNA *)&rna_PropertyActuator_property,
	-1, "value", 262145, "Value",
	"The name of the property or the value to use (use \"\" around strings)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertyActuator_value_get, PropertyActuator_value_length, PropertyActuator_value_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_PropertyActuator_object = {
	{(PropertyRNA *)&rna_PropertyActuator_object_property, (PropertyRNA *)&rna_PropertyActuator_value,
	-1, "object", 8388609, "Object",
	"Copy from this Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertyActuator_object_get, PropertyActuator_object_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_PropertyActuator_object_property = {
	{NULL, (PropertyRNA *)&rna_PropertyActuator_object,
	-1, "object_property", 262145, "Property Name",
	"Copy this property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertyActuator_object_property_get, PropertyActuator_object_property_length, PropertyActuator_object_property_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_PropertyActuator = {
	{(ContainerRNA *)&RNA_ConstraintActuator, (ContainerRNA *)&RNA_SoundActuator,
	NULL,
	{(PropertyRNA *)&rna_PropertyActuator_mode, (PropertyRNA *)&rna_PropertyActuator_object_property}},
	"PropertyActuator", NULL, NULL, 4, "Property Actuator",
	"Actuator to handle properties",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Constraint Actuator */
static EnumPropertyItem rna_ConstraintActuator_mode_items[5] = {
	{0, "LOC", 0, "Location Constraint", ""},
	{1, "DIST", 0, "Distance Constraint", ""},
	{2, "ORI", 0, "Orientation Constraint", ""},
	{3, "FH", 0, "Force Field Constraint", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ConstraintActuator_mode = {
	{(PropertyRNA *)&rna_ConstraintActuator_limit, NULL,
	-1, "mode", 3, "Constraints Mode",
	"The type of the constraint",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_mode_get, ConstraintActuator_mode_set, NULL, NULL, NULL, NULL, rna_ConstraintActuator_mode_items, 4, 0
};

static EnumPropertyItem rna_ConstraintActuator_limit_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "LOCX", 0, "Loc X", ""},
	{2, "LOCY", 0, "Loc Y", ""},
	{4, "LOCZ", 0, "Loc Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ConstraintActuator_limit = {
	{(PropertyRNA *)&rna_ConstraintActuator_direction, (PropertyRNA *)&rna_ConstraintActuator_mode,
	-1, "limit", 3, "Limit",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_limit_get, ConstraintActuator_limit_set, NULL, NULL, NULL, NULL, rna_ConstraintActuator_limit_items, 4, 0
};

static EnumPropertyItem rna_ConstraintActuator_direction_items[8] = {
	{0, "NONE", 0, "None", ""},
	{1, "DIRPX", 0, "X axis", ""},
	{2, "DIRPY", 0, "Y axis", ""},
	{4, "DIRPZ", 0, "Z axis", ""},
	{8, "DIRNX", 0, "-X axis", ""},
	{16, "DIRNY", 0, "-Y axis", ""},
	{32, "DIRNZ", 0, "-Z axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ConstraintActuator_direction = {
	{(PropertyRNA *)&rna_ConstraintActuator_direction_axis, (PropertyRNA *)&rna_ConstraintActuator_limit,
	-1, "direction", 3, "Direction",
	"Direction of the ray",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_direction_get, ConstraintActuator_direction_set, NULL, NULL, NULL, NULL, rna_ConstraintActuator_direction_items, 7, 0
};

static EnumPropertyItem rna_ConstraintActuator_direction_axis_items[8] = {
	{0, "NONE", 0, "None", ""},
	{1, "DIRPX", 0, "X axis", ""},
	{2, "DIRPY", 0, "Y axis", ""},
	{4, "DIRPZ", 0, "Z axis", ""},
	{8, "DIRNX", 0, "-X axis", ""},
	{16, "DIRNY", 0, "-Y axis", ""},
	{32, "DIRNZ", 0, "-Z axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ConstraintActuator_direction_axis = {
	{(PropertyRNA *)&rna_ConstraintActuator_limit_min, (PropertyRNA *)&rna_ConstraintActuator_direction,
	-1, "direction_axis", 3, "Direction",
	"Select the axis to be aligned along the reference direction",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_direction_axis_get, ConstraintActuator_direction_axis_set, NULL, NULL, NULL, NULL, rna_ConstraintActuator_direction_axis_items, 7, 0
};

FloatPropertyRNA rna_ConstraintActuator_limit_min = {
	{(PropertyRNA *)&rna_ConstraintActuator_limit_max, (PropertyRNA *)&rna_ConstraintActuator_direction_axis,
	-1, "limit_min", 3, "Min",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_limit_min_get, ConstraintActuator_limit_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2000.0f, 2000.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ConstraintActuator_limit_max = {
	{(PropertyRNA *)&rna_ConstraintActuator_damping, (PropertyRNA *)&rna_ConstraintActuator_limit_min,
	-1, "limit_max", 3, "Max",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_limit_max_get, ConstraintActuator_limit_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2000.0f, 2000.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

IntPropertyRNA rna_ConstraintActuator_damping = {
	{(PropertyRNA *)&rna_ConstraintActuator_range, (PropertyRNA *)&rna_ConstraintActuator_limit_max,
	-1, "damping", 8195, "Damping",
	"Damping factor: time constant (in frame) of low pass filter",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bConstraintActuator, damp), 1, NULL},
	ConstraintActuator_damping_get, ConstraintActuator_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, -32768, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_ConstraintActuator_range = {
	{(PropertyRNA *)&rna_ConstraintActuator_distance, (PropertyRNA *)&rna_ConstraintActuator_damping,
	-1, "range", 3, "Range",
	"Maximum length of ray",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_range_get, ConstraintActuator_range_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2000.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ConstraintActuator_distance = {
	{(PropertyRNA *)&rna_ConstraintActuator_material, (PropertyRNA *)&rna_ConstraintActuator_range,
	-1, "distance", 3, "Distance",
	"Keep this distance to target",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_distance_get, ConstraintActuator_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2000.0f, 2000.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

StringPropertyRNA rna_ConstraintActuator_material = {
	{(PropertyRNA *)&rna_ConstraintActuator_property, (PropertyRNA *)&rna_ConstraintActuator_distance,
	-1, "material", 262145, "Material",
	"Ray detects only Objects with this material",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_material_get, ConstraintActuator_material_length, ConstraintActuator_material_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_ConstraintActuator_property = {
	{(PropertyRNA *)&rna_ConstraintActuator_time, (PropertyRNA *)&rna_ConstraintActuator_material,
	-1, "property", 262145, "Property",
	"Ray detects only Objects with this property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_property_get, ConstraintActuator_property_length, ConstraintActuator_property_set, NULL, NULL, NULL, 64, ""
};

IntPropertyRNA rna_ConstraintActuator_time = {
	{(PropertyRNA *)&rna_ConstraintActuator_damping_rotation, (PropertyRNA *)&rna_ConstraintActuator_property,
	-1, "time", 8195, "Time",
	"Maximum activation time in frame, 0 for unlimited",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bConstraintActuator, time), 1, NULL},
	ConstraintActuator_time_get, ConstraintActuator_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, -32768, 32767, 1, 0, NULL
};

IntPropertyRNA rna_ConstraintActuator_damping_rotation = {
	{(PropertyRNA *)&rna_ConstraintActuator_direction_axis_pos, (PropertyRNA *)&rna_ConstraintActuator_time,
	-1, "damping_rotation", 8195, "RotDamp",
	"Use a different damping for orientation",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bConstraintActuator, rotdamp), 1, NULL},
	ConstraintActuator_damping_rotation_get, ConstraintActuator_damping_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, -32768, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_ConstraintActuator_direction_axis_pos_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "DIRPX", 0, "X axis", ""},
	{2, "DIRPY", 0, "Y axis", ""},
	{4, "DIRPZ", 0, "Z axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ConstraintActuator_direction_axis_pos = {
	{(PropertyRNA *)&rna_ConstraintActuator_rotation_max, (PropertyRNA *)&rna_ConstraintActuator_damping_rotation,
	-1, "direction_axis_pos", 3, "Direction",
	"Select the axis to be aligned along the reference direction",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_direction_axis_pos_get, ConstraintActuator_direction_axis_pos_set, NULL, NULL, NULL, NULL, rna_ConstraintActuator_direction_axis_pos_items, 4, 0
};

static float rna_ConstraintActuator_rotation_max_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ConstraintActuator_rotation_max = {
	{(PropertyRNA *)&rna_ConstraintActuator_angle_min, (PropertyRNA *)&rna_ConstraintActuator_direction_axis_pos,
	-1, "rotation_max", 8195, "Reference Direction",
	"Reference Direction",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 318767104, NULL, NULL,
	offsetof(bConstraintActuator, maxrot), 4, NULL},
	NULL, NULL, ConstraintActuator_rotation_max_get, ConstraintActuator_rotation_max_set, NULL, NULL, NULL, NULL, NULL, NULL, -2000.0f, 2000.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_ConstraintActuator_rotation_max_default
};

FloatPropertyRNA rna_ConstraintActuator_angle_min = {
	{(PropertyRNA *)&rna_ConstraintActuator_angle_max, (PropertyRNA *)&rna_ConstraintActuator_rotation_max,
	-1, "angle_min", 8195, "Min Angle",
	"Minimum angle to maintain with target direction (no correction is done if angle with target direction is between min and max)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bConstraintActuator, minloc[0]), 4, NULL},
	ConstraintActuator_angle_min_get, ConstraintActuator_angle_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ConstraintActuator_angle_max = {
	{(PropertyRNA *)&rna_ConstraintActuator_fh_height, (PropertyRNA *)&rna_ConstraintActuator_angle_min,
	-1, "angle_max", 8195, "Max Angle",
	"Maximum angle allowed with target direction (no correction is done if angle with target direction is between min and max)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bConstraintActuator, maxloc[0]), 4, NULL},
	ConstraintActuator_angle_max_get, ConstraintActuator_angle_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ConstraintActuator_fh_height = {
	{(PropertyRNA *)&rna_ConstraintActuator_fh_force, (PropertyRNA *)&rna_ConstraintActuator_angle_max,
	-1, "fh_height", 3, "Distance",
	"Height of the force field area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_fh_height_get, ConstraintActuator_fh_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 2000.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ConstraintActuator_fh_force = {
	{(PropertyRNA *)&rna_ConstraintActuator_fh_damping, (PropertyRNA *)&rna_ConstraintActuator_fh_height,
	-1, "fh_force", 3, "Force",
	"Spring force within the force field area",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_fh_force_get, ConstraintActuator_fh_force_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ConstraintActuator_fh_damping = {
	{(PropertyRNA *)&rna_ConstraintActuator_use_force_distance, (PropertyRNA *)&rna_ConstraintActuator_fh_force,
	-1, "fh_damping", 8195, "Damping",
	"Damping factor of the force field spring",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bConstraintActuator, maxrot[0]), 4, NULL},
	ConstraintActuator_fh_damping_get, ConstraintActuator_fh_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_ConstraintActuator_use_force_distance = {
	{(PropertyRNA *)&rna_ConstraintActuator_use_local, (PropertyRNA *)&rna_ConstraintActuator_fh_damping,
	-1, "use_force_distance", 3, "Force Distance",
	"Force distance of object to point of impact of ray",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_use_force_distance_get, ConstraintActuator_use_force_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ConstraintActuator_use_local = {
	{(PropertyRNA *)&rna_ConstraintActuator_use_normal, (PropertyRNA *)&rna_ConstraintActuator_use_force_distance,
	-1, "use_local", 3, "L",
	"Set ray along object\'s axis or global axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_use_local_get, ConstraintActuator_use_local_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ConstraintActuator_use_normal = {
	{(PropertyRNA *)&rna_ConstraintActuator_use_persistent, (PropertyRNA *)&rna_ConstraintActuator_use_local,
	-1, "use_normal", 3, "N",
	"Set object axis along (local axis) or parallel (global axis) to the normal at hit position",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_use_normal_get, ConstraintActuator_use_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ConstraintActuator_use_persistent = {
	{(PropertyRNA *)&rna_ConstraintActuator_use_material_detect, (PropertyRNA *)&rna_ConstraintActuator_use_normal,
	-1, "use_persistent", 3, "PER",
	"Persistent actuator: stays active even if ray does not reach target",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_use_persistent_get, ConstraintActuator_use_persistent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ConstraintActuator_use_material_detect = {
	{(PropertyRNA *)&rna_ConstraintActuator_use_fh_paralel_axis, (PropertyRNA *)&rna_ConstraintActuator_use_persistent,
	-1, "use_material_detect", 3, "M/P",
	"Detect material instead of property",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_use_material_detect_get, ConstraintActuator_use_material_detect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ConstraintActuator_use_fh_paralel_axis = {
	{(PropertyRNA *)&rna_ConstraintActuator_use_fh_normal, (PropertyRNA *)&rna_ConstraintActuator_use_material_detect,
	-1, "use_fh_paralel_axis", 3, "Rot Fh",
	"Keep object axis parallel to normal",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_use_fh_paralel_axis_get, ConstraintActuator_use_fh_paralel_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ConstraintActuator_use_fh_normal = {
	{NULL, (PropertyRNA *)&rna_ConstraintActuator_use_fh_paralel_axis,
	-1, "use_fh_normal", 3, "N",
	"Add a horizontal spring force on slopes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ConstraintActuator_use_fh_normal_get, ConstraintActuator_use_fh_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ConstraintActuator = {
	{(ContainerRNA *)&RNA_EditObjectActuator, (ContainerRNA *)&RNA_PropertyActuator,
	NULL,
	{(PropertyRNA *)&rna_ConstraintActuator_mode, (PropertyRNA *)&rna_ConstraintActuator_use_fh_normal}},
	"ConstraintActuator", NULL, NULL, 4, "Constraint Actuator",
	"Actuator to handle Constraints",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Edit Object Actuator */
static EnumPropertyItem rna_EditObjectActuator_mode_items[6] = {
	{0, "ADDOBJECT", 0, "Add Object", ""},
	{1, "ENDOBJECT", 0, "End Object", ""},
	{2, "REPLACEMESH", 0, "Replace Mesh", ""},
	{3, "TRACKTO", 0, "Track to", ""},
	{4, "DYNAMICS", 0, "Dynamics", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EditObjectActuator_mode = {
	{(PropertyRNA *)&rna_EditObjectActuator_dynamic_operation, NULL,
	-1, "mode", 3, "Edit Object",
	"The mode of the actuator",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_mode_get, EditObjectActuator_mode_set, NULL, NULL, NULL, NULL, rna_EditObjectActuator_mode_items, 5, 0
};

static EnumPropertyItem rna_EditObjectActuator_dynamic_operation_items[6] = {
	{0, "RESTOREDYN", 0, "Restore Dynamics", ""},
	{1, "SUSPENDDYN", 0, "Suspend Dynamics", ""},
	{2, "ENABLERIGIDBODY", 0, "Enable Rigid Body", ""},
	{3, "DISABLERIGIDBODY", 0, "Disable Rigid Body", ""},
	{4, "SETMASS", 0, "Set Mass", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EditObjectActuator_dynamic_operation = {
	{(PropertyRNA *)&rna_EditObjectActuator_up_axis, (PropertyRNA *)&rna_EditObjectActuator_mode,
	-1, "dynamic_operation", 3, "Dynamic Operation",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_dynamic_operation_get, EditObjectActuator_dynamic_operation_set, NULL, NULL, NULL, NULL, rna_EditObjectActuator_dynamic_operation_items, 5, 0
};

static EnumPropertyItem rna_EditObjectActuator_up_axis_items[4] = {
	{0, "UPAXISX", 0, "X axis", ""},
	{1, "UPAXISY", 0, "Y axis", ""},
	{2, "UPAXISZ", 0, "Z axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EditObjectActuator_up_axis = {
	{(PropertyRNA *)&rna_EditObjectActuator_track_axis, (PropertyRNA *)&rna_EditObjectActuator_dynamic_operation,
	-1, "up_axis", 3, "Up Axis",
	"The axis that points upward",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_up_axis_get, EditObjectActuator_up_axis_set, NULL, NULL, NULL, NULL, rna_EditObjectActuator_up_axis_items, 3, 0
};

static EnumPropertyItem rna_EditObjectActuator_track_axis_items[7] = {
	{0, "TRACKAXISX", 0, "X axis", ""},
	{1, "TRACKAXISY", 0, "Y axis", ""},
	{2, "TRACKAXISZ", 0, "Z axis", ""},
	{3, "TRACKAXISNEGX", 0, "-X axis", ""},
	{4, "TRACKAXISNEGY", 0, "-Y axis", ""},
	{5, "TRACKAXISNEGZ", 0, "-Z axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EditObjectActuator_track_axis = {
	{(PropertyRNA *)&rna_EditObjectActuator_object, (PropertyRNA *)&rna_EditObjectActuator_up_axis,
	-1, "track_axis", 3, "Track Axis",
	"The axis that points to the target object",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_track_axis_get, EditObjectActuator_track_axis_set, NULL, NULL, NULL, NULL, rna_EditObjectActuator_track_axis_items, 6, 0
};

PointerPropertyRNA rna_EditObjectActuator_object = {
	{(PropertyRNA *)&rna_EditObjectActuator_track_object, (PropertyRNA *)&rna_EditObjectActuator_track_axis,
	-1, "object", 8388609, "Object",
	"Add this Object and all its children (can\'t be on a visible layer)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_object_get, EditObjectActuator_object_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_EditObjectActuator_track_object = {
	{(PropertyRNA *)&rna_EditObjectActuator_mesh, (PropertyRNA *)&rna_EditObjectActuator_object,
	-1, "track_object", 8388609, "Object",
	"Track to this Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_track_object_get, EditObjectActuator_track_object_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_EditObjectActuator_mesh = {
	{(PropertyRNA *)&rna_EditObjectActuator_time, (PropertyRNA *)&rna_EditObjectActuator_track_object,
	-1, "mesh", 8388673, "Mesh",
	"Replace the existing, when left blank \'Phys\' will remake the existing physics mesh",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_mesh_get, EditObjectActuator_mesh_set, NULL, NULL,&RNA_Mesh
};

IntPropertyRNA rna_EditObjectActuator_time = {
	{(PropertyRNA *)&rna_EditObjectActuator_mass, (PropertyRNA *)&rna_EditObjectActuator_mesh,
	-1, "time", 8195, "Time",
	"Duration the new Object lives or the track takes",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bEditObjectActuator, time), 0, NULL},
	EditObjectActuator_time_get, EditObjectActuator_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 2000, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_EditObjectActuator_mass = {
	{(PropertyRNA *)&rna_EditObjectActuator_linear_velocity, (PropertyRNA *)&rna_EditObjectActuator_time,
	-1, "mass", 8195, "Mass",
	"The mass of the object",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bEditObjectActuator, mass), 4, NULL},
	EditObjectActuator_mass_get, EditObjectActuator_mass_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

static float rna_EditObjectActuator_linear_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditObjectActuator_linear_velocity = {
	{(PropertyRNA *)&rna_EditObjectActuator_angular_velocity, (PropertyRNA *)&rna_EditObjectActuator_mass,
	-1, "linear_velocity", 8195, "Linear Velocity",
	"Velocity upon creation",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 318767104, NULL, NULL,
	offsetof(bEditObjectActuator, linVelocity), 4, NULL},
	NULL, NULL, EditObjectActuator_linear_velocity_get, EditObjectActuator_linear_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_EditObjectActuator_linear_velocity_default
};

static float rna_EditObjectActuator_angular_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditObjectActuator_angular_velocity = {
	{(PropertyRNA *)&rna_EditObjectActuator_use_local_linear_velocity, (PropertyRNA *)&rna_EditObjectActuator_linear_velocity,
	-1, "angular_velocity", 8195, "Angular Velocity",
	"Angular velocity upon creation",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 318767104, NULL, NULL,
	offsetof(bEditObjectActuator, angVelocity), 4, NULL},
	NULL, NULL, EditObjectActuator_angular_velocity_get, EditObjectActuator_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, rna_EditObjectActuator_angular_velocity_default
};

BoolPropertyRNA rna_EditObjectActuator_use_local_linear_velocity = {
	{(PropertyRNA *)&rna_EditObjectActuator_use_local_angular_velocity, (PropertyRNA *)&rna_EditObjectActuator_angular_velocity,
	-1, "use_local_linear_velocity", 3, "L",
	"Apply the transformation locally",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_use_local_linear_velocity_get, EditObjectActuator_use_local_linear_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditObjectActuator_use_local_angular_velocity = {
	{(PropertyRNA *)&rna_EditObjectActuator_use_replace_display_mesh, (PropertyRNA *)&rna_EditObjectActuator_use_local_linear_velocity,
	-1, "use_local_angular_velocity", 3, "L",
	"Apply the rotation locally",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_use_local_angular_velocity_get, EditObjectActuator_use_local_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditObjectActuator_use_replace_display_mesh = {
	{(PropertyRNA *)&rna_EditObjectActuator_use_replace_physics_mesh, (PropertyRNA *)&rna_EditObjectActuator_use_local_angular_velocity,
	-1, "use_replace_display_mesh", 3, "Gfx",
	"Replace the display mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_use_replace_display_mesh_get, EditObjectActuator_use_replace_display_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditObjectActuator_use_replace_physics_mesh = {
	{(PropertyRNA *)&rna_EditObjectActuator_use_3d_tracking, (PropertyRNA *)&rna_EditObjectActuator_use_replace_display_mesh,
	-1, "use_replace_physics_mesh", 3, "Phys",
	"Replace the physics mesh (triangle bounds only - compound shapes not supported)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_use_replace_physics_mesh_get, EditObjectActuator_use_replace_physics_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditObjectActuator_use_3d_tracking = {
	{NULL, (PropertyRNA *)&rna_EditObjectActuator_use_replace_physics_mesh,
	-1, "use_3d_tracking", 3, "3D",
	"Enable 3D tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	EditObjectActuator_use_3d_tracking_get, EditObjectActuator_use_3d_tracking_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_EditObjectActuator = {
	{(ContainerRNA *)&RNA_SceneActuator, (ContainerRNA *)&RNA_ConstraintActuator,
	NULL,
	{(PropertyRNA *)&rna_EditObjectActuator_mode, (PropertyRNA *)&rna_EditObjectActuator_use_3d_tracking}},
	"EditObjectActuator", NULL, NULL, 4, "Edit Object Actuator",
	"Actuator used to edit objects",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Scene Actuator */
static EnumPropertyItem rna_SceneActuator_mode_items[9] = {
	{0, "RESTART", 0, "Restart", ""},
	{1, "SET", 0, "Set Scene", ""},
	{2, "CAMERA", 0, "Set Camera", ""},
	{3, "ADDFRONT", 0, "Add Overlay Scene", ""},
	{4, "ADDBACK", 0, "Add Background Scene", ""},
	{5, "REMOVE", 0, "Remove Scene", ""},
	{6, "SUSPEND", 0, "Suspend Scene", ""},
	{7, "RESUME", 0, "Resume Scene", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneActuator_mode = {
	{(PropertyRNA *)&rna_SceneActuator_camera, NULL,
	-1, "mode", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SceneActuator_mode_get, SceneActuator_mode_set, NULL, NULL, NULL, NULL, rna_SceneActuator_mode_items, 8, 0
};

PointerPropertyRNA rna_SceneActuator_camera = {
	{(PropertyRNA *)&rna_SceneActuator_scene, (PropertyRNA *)&rna_SceneActuator_mode,
	-1, "camera", 8388609, "Camera Object",
	"Set this Camera (leave empty to refer to self object)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SceneActuator_camera_get, SceneActuator_camera_set, NULL, rna_Camera_object_poll,&RNA_Object
};

PointerPropertyRNA rna_SceneActuator_scene = {
	{NULL, (PropertyRNA *)&rna_SceneActuator_camera,
	-1, "scene", 8388609, "Scene",
	"Scene to be added/removed/paused/resumed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SceneActuator_scene_get, SceneActuator_scene_set, NULL, NULL,&RNA_Scene
};

StructRNA RNA_SceneActuator = {
	{(ContainerRNA *)&RNA_RandomActuator, (ContainerRNA *)&RNA_EditObjectActuator,
	NULL,
	{(PropertyRNA *)&rna_SceneActuator_mode, (PropertyRNA *)&rna_SceneActuator_scene}},
	"SceneActuator", NULL, NULL, 4, "Scene Actuator",
	"",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Random Actuator */
IntPropertyRNA rna_RandomActuator_seed = {
	{(PropertyRNA *)&rna_RandomActuator_property, NULL,
	-1, "seed", 8195, "Seed",
	"Initial seed of the random generator, use Python for more freedom (choose 0 for not random)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, seed), 0, NULL},
	RandomActuator_seed_get, RandomActuator_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

StringPropertyRNA rna_RandomActuator_property = {
	{(PropertyRNA *)&rna_RandomActuator_distribution, (PropertyRNA *)&rna_RandomActuator_seed,
	-1, "property", 262145, "Property",
	"Assign the random value to this property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RandomActuator_property_get, RandomActuator_property_length, RandomActuator_property_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_RandomActuator_distribution_items[11] = {
	{0, "BOOL_CONSTANT", 0, "Bool Constant", ""},
	{1, "BOOL_UNIFORM", 0, "Bool Uniform", ""},
	{2, "BOOL_BERNOUILLI", 0, "Bool Bernoulli", ""},
	{3, "INT_CONSTANT", 0, "Int Constant", ""},
	{4, "INT_UNIFORM", 0, "Int Uniform", ""},
	{5, "INT_POISSON", 0, "Int Poisson", ""},
	{6, "FLOAT_CONSTANT", 0, "Float Constant", ""},
	{7, "FLOAT_UNIFORM", 0, "Float Uniform", ""},
	{8, "FLOAT_NORMAL", 0, "Float Normal", ""},
	{9, "FLOAT_NEGATIVE_EXPONENTIAL", 0, "Float Neg. Exp.", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RandomActuator_distribution = {
	{(PropertyRNA *)&rna_RandomActuator_use_always_true, (PropertyRNA *)&rna_RandomActuator_property,
	-1, "distribution", 3, "Distribution",
	"Choose the type of distribution",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RandomActuator_distribution_get, RandomActuator_distribution_set, NULL, NULL, NULL, NULL, rna_RandomActuator_distribution_items, 10, 0
};

BoolPropertyRNA rna_RandomActuator_use_always_true = {
	{(PropertyRNA *)&rna_RandomActuator_chance, (PropertyRNA *)&rna_RandomActuator_distribution,
	-1, "use_always_true", 3, "Always True",
	"Always false or always true",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RandomActuator_use_always_true_get, RandomActuator_use_always_true_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RandomActuator_chance = {
	{(PropertyRNA *)&rna_RandomActuator_int_value, (PropertyRNA *)&rna_RandomActuator_use_always_true,
	-1, "chance", 8195, "Chance",
	"Pick a number between 0 and 1, success if it\'s below this value",
	0, "*",
	PROP_FLOAT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, float_arg_1), 4, NULL},
	RandomActuator_chance_get, RandomActuator_chance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_RandomActuator_int_value = {
	{(PropertyRNA *)&rna_RandomActuator_int_min, (PropertyRNA *)&rna_RandomActuator_chance,
	-1, "int_value", 8195, "Value",
	"Always return this number",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, int_arg_1), 0, NULL},
	RandomActuator_int_value_get, RandomActuator_int_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-1000, 1000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RandomActuator_int_min = {
	{(PropertyRNA *)&rna_RandomActuator_int_max, (PropertyRNA *)&rna_RandomActuator_int_value,
	-1, "int_min", 8195, "Min",
	"Choose a number from a range: lower boundary of the range",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, int_arg_1), 0, NULL},
	RandomActuator_int_min_get, RandomActuator_int_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-1000, 1000, -1000, 1000, 1, 0, NULL
};

IntPropertyRNA rna_RandomActuator_int_max = {
	{(PropertyRNA *)&rna_RandomActuator_int_mean, (PropertyRNA *)&rna_RandomActuator_int_min,
	-1, "int_max", 8195, "Max",
	"Choose a number from a range: upper boundary of the range",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, int_arg_2), 0, NULL},
	RandomActuator_int_max_get, RandomActuator_int_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-1000, 1000, -1000, 1000, 1, 0, NULL
};

FloatPropertyRNA rna_RandomActuator_int_mean = {
	{(PropertyRNA *)&rna_RandomActuator_float_value, (PropertyRNA *)&rna_RandomActuator_int_max,
	-1, "int_mean", 8195, "Mean",
	"Expected mean value of the distribution",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, float_arg_1), 4, NULL},
	RandomActuator_int_mean_get, RandomActuator_int_mean_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RandomActuator_float_value = {
	{(PropertyRNA *)&rna_RandomActuator_float_min, (PropertyRNA *)&rna_RandomActuator_int_mean,
	-1, "float_value", 8195, "Value",
	"Always return this number",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, float_arg_1), 4, NULL},
	RandomActuator_float_value_get, RandomActuator_float_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RandomActuator_float_min = {
	{(PropertyRNA *)&rna_RandomActuator_float_max, (PropertyRNA *)&rna_RandomActuator_float_value,
	-1, "float_min", 8195, "Min",
	"Choose a number from a range: lower boundary of the range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, float_arg_1), 4, NULL},
	RandomActuator_float_min_get, RandomActuator_float_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RandomActuator_float_max = {
	{(PropertyRNA *)&rna_RandomActuator_float_mean, (PropertyRNA *)&rna_RandomActuator_float_min,
	-1, "float_max", 8195, "Max",
	"Choose a number from a range: upper boundary of the range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, float_arg_2), 4, NULL},
	RandomActuator_float_max_get, RandomActuator_float_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RandomActuator_float_mean = {
	{(PropertyRNA *)&rna_RandomActuator_standard_derivation, (PropertyRNA *)&rna_RandomActuator_float_max,
	-1, "float_mean", 8195, "Mean",
	"A normal distribution: mean of the distribution",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, float_arg_1), 4, NULL},
	RandomActuator_float_mean_get, RandomActuator_float_mean_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RandomActuator_standard_derivation = {
	{(PropertyRNA *)&rna_RandomActuator_half_life_time, (PropertyRNA *)&rna_RandomActuator_float_mean,
	-1, "standard_derivation", 8195, "SD",
	"A normal distribution: standard deviation of the distribution",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, float_arg_2), 4, NULL},
	RandomActuator_standard_derivation_get, RandomActuator_standard_derivation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RandomActuator_half_life_time = {
	{NULL, (PropertyRNA *)&rna_RandomActuator_standard_derivation,
	-1, "half_life_time", 8195, "Half-Life Time",
	"Negative exponential dropoff",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomActuator, float_arg_1), 4, NULL},
	RandomActuator_half_life_time_get, RandomActuator_half_life_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_RandomActuator = {
	{(ContainerRNA *)&RNA_MessageActuator, (ContainerRNA *)&RNA_SceneActuator,
	NULL,
	{(PropertyRNA *)&rna_RandomActuator_seed, (PropertyRNA *)&rna_RandomActuator_half_life_time}},
	"RandomActuator", NULL, NULL, 4, "Random Actuator",
	"",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Message Actuator */
StringPropertyRNA rna_MessageActuator_to_property = {
	{(PropertyRNA *)&rna_MessageActuator_subject, NULL,
	-1, "to_property", 262145, "To",
	"Optional, send message to objects with this name only, or empty to broadcast",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MessageActuator_to_property_get, MessageActuator_to_property_length, MessageActuator_to_property_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_MessageActuator_subject = {
	{(PropertyRNA *)&rna_MessageActuator_body_type, (PropertyRNA *)&rna_MessageActuator_to_property,
	-1, "subject", 262145, "Subject",
	"Optional, message subject (this is what can be filtered on)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MessageActuator_subject_get, MessageActuator_subject_length, MessageActuator_subject_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_MessageActuator_body_type_items[3] = {
	{0, "TEXT", 0, "Text", ""},
	{1, "PROPERTY", 0, "Property", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MessageActuator_body_type = {
	{(PropertyRNA *)&rna_MessageActuator_body_message, (PropertyRNA *)&rna_MessageActuator_subject,
	-1, "body_type", 3, "Body",
	"Toggle message type: either Text or a PropertyName",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MessageActuator_body_type_get, MessageActuator_body_type_set, NULL, NULL, NULL, NULL, rna_MessageActuator_body_type_items, 2, 0
};

StringPropertyRNA rna_MessageActuator_body_message = {
	{(PropertyRNA *)&rna_MessageActuator_body_property, (PropertyRNA *)&rna_MessageActuator_body_type,
	-1, "body_message", 262145, "Body",
	"Optional, message body Text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MessageActuator_body_message_get, MessageActuator_body_message_length, MessageActuator_body_message_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_MessageActuator_body_property = {
	{NULL, (PropertyRNA *)&rna_MessageActuator_body_message,
	-1, "body_property", 262145, "Prop Name",
	"The message body will be set by the Property Value",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MessageActuator_body_property_get, MessageActuator_body_property_length, MessageActuator_body_property_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_MessageActuator = {
	{(ContainerRNA *)&RNA_GameActuator, (ContainerRNA *)&RNA_RandomActuator,
	NULL,
	{(PropertyRNA *)&rna_MessageActuator_to_property, (PropertyRNA *)&rna_MessageActuator_body_property}},
	"MessageActuator", NULL, NULL, 4, "Message Actuator",
	"",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Game Actuator */
static EnumPropertyItem rna_GameActuator_mode_items[6] = {
	{0, "START", 0, "Start Game From File", ""},
	{2, "RESTART", 0, "Restart Game", ""},
	{3, "QUIT", 0, "Quit Game", ""},
	{4, "SAVECFG", 0, "Save bge.logic.globalDict", ""},
	{5, "LOADCFG", 0, "Load bge.logic.globalDict", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GameActuator_mode = {
	{(PropertyRNA *)&rna_GameActuator_filename, NULL,
	-1, "mode", 3, "Game",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	GameActuator_mode_get, GameActuator_mode_set, NULL, NULL, NULL, NULL, rna_GameActuator_mode_items, 5, 0
};

StringPropertyRNA rna_GameActuator_filename = {
	{NULL, (PropertyRNA *)&rna_GameActuator_mode,
	-1, "filename", 262145, "File",
	"Load this blend file, use the \"//\" prefix for a path relative to the current blend file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	GameActuator_filename_get, GameActuator_filename_length, GameActuator_filename_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_GameActuator = {
	{(ContainerRNA *)&RNA_VisibilityActuator, (ContainerRNA *)&RNA_MessageActuator,
	NULL,
	{(PropertyRNA *)&rna_GameActuator_mode, (PropertyRNA *)&rna_GameActuator_filename}},
	"GameActuator", NULL, NULL, 4, "Game Actuator",
	"",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Visibility Actuator */
BoolPropertyRNA rna_VisibilityActuator_use_visible = {
	{(PropertyRNA *)&rna_VisibilityActuator_use_occlusion, NULL,
	-1, "use_visible", 3, "Visible",
	"Set the objects visible (initialized from the object render restriction toggle in physics button)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	VisibilityActuator_use_visible_get, VisibilityActuator_use_visible_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_VisibilityActuator_use_occlusion = {
	{(PropertyRNA *)&rna_VisibilityActuator_apply_to_children, (PropertyRNA *)&rna_VisibilityActuator_use_visible,
	-1, "use_occlusion", 3, "Occlusion",
	"Set the object to occlude objects behind it (initialized from the object type in physics button)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	VisibilityActuator_use_occlusion_get, VisibilityActuator_use_occlusion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_VisibilityActuator_apply_to_children = {
	{NULL, (PropertyRNA *)&rna_VisibilityActuator_use_occlusion,
	-1, "apply_to_children", 3, "Children",
	"Set all the children of this object to the same visibility/occlusion recursively",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	VisibilityActuator_apply_to_children_get, VisibilityActuator_apply_to_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_VisibilityActuator = {
	{(ContainerRNA *)&RNA_Filter2DActuator, (ContainerRNA *)&RNA_GameActuator,
	NULL,
	{(PropertyRNA *)&rna_VisibilityActuator_use_visible, (PropertyRNA *)&rna_VisibilityActuator_apply_to_children}},
	"VisibilityActuator", NULL, NULL, 4, "Visibility Actuator",
	"Actuator to set visibility and occlusion of the object",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Filter 2D Actuator */
static EnumPropertyItem rna_Filter2DActuator_mode_items[16] = {
	{-2, "ENABLE", 0, "Enable Filter", ""},
	{-1, "DISABLE", 0, "Disable Filter", ""},
	{0, "REMOVE", 0, "Remove Filter", ""},
	{1, "MOTIONBLUR", 0, "Motion Blur", ""},
	{2, "BLUR", 0, "Blur", ""},
	{3, "SHARPEN", 0, "Sharpen", ""},
	{4, "DILATION", 0, "Dilation", ""},
	{5, "EROSION", 0, "Erosion", ""},
	{6, "LAPLACIAN", 0, "Laplacian", ""},
	{7, "SOBEL", 0, "Sobel", ""},
	{8, "PREWITT", 0, "Prewitt", ""},
	{9, "GRAYSCALE", 0, "Gray Scale", ""},
	{10, "SEPIA", 0, "Sepia", ""},
	{11, "INVERT", 0, "Invert", ""},
	{12, "CUSTOMFILTER", 0, "Custom Filter", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Filter2DActuator_mode = {
	{(PropertyRNA *)&rna_Filter2DActuator_glsl_shader, NULL,
	-1, "mode", 3, "Filter 2D Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Filter2DActuator_mode_get, Filter2DActuator_mode_set, NULL, NULL, NULL, NULL, rna_Filter2DActuator_mode_items, 15, 0
};

PointerPropertyRNA rna_Filter2DActuator_glsl_shader = {
	{(PropertyRNA *)&rna_Filter2DActuator_filter_pass, (PropertyRNA *)&rna_Filter2DActuator_mode,
	-1, "glsl_shader", 8388609, "Script",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Filter2DActuator_glsl_shader_get, Filter2DActuator_glsl_shader_set, NULL, NULL,&RNA_Text
};

IntPropertyRNA rna_Filter2DActuator_filter_pass = {
	{(PropertyRNA *)&rna_Filter2DActuator_motion_blur_factor, (PropertyRNA *)&rna_Filter2DActuator_glsl_shader,
	-1, "filter_pass", 8195, "Pass Number",
	"Set filter order",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bTwoDFilterActuator, int_arg), 0, NULL},
	Filter2DActuator_filter_pass_get, Filter2DActuator_filter_pass_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 99, 0, 99, 1, 0, NULL
};

FloatPropertyRNA rna_Filter2DActuator_motion_blur_factor = {
	{(PropertyRNA *)&rna_Filter2DActuator_use_motion_blur, (PropertyRNA *)&rna_Filter2DActuator_filter_pass,
	-1, "motion_blur_factor", 8195, "Value",
	"Motion blur factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bTwoDFilterActuator, float_arg), 4, NULL},
	Filter2DActuator_motion_blur_factor_get, Filter2DActuator_motion_blur_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Filter2DActuator_use_motion_blur = {
	{NULL, (PropertyRNA *)&rna_Filter2DActuator_motion_blur_factor,
	-1, "use_motion_blur", 3, "Enable",
	"Enable/Disable Motion Blur",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Filter2DActuator_use_motion_blur_get, Filter2DActuator_use_motion_blur_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Filter2DActuator = {
	{(ContainerRNA *)&RNA_ParentActuator, (ContainerRNA *)&RNA_VisibilityActuator,
	NULL,
	{(PropertyRNA *)&rna_Filter2DActuator_mode, (PropertyRNA *)&rna_Filter2DActuator_use_motion_blur}},
	"Filter2DActuator", NULL, NULL, 4, "Filter 2D Actuator",
	"Actuator to apply screen graphic effects",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Parent Actuator */
static EnumPropertyItem rna_ParentActuator_mode_items[3] = {
	{0, "SETPARENT", 0, "Set Parent", ""},
	{1, "REMOVEPARENT", 0, "Remove Parent", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParentActuator_mode = {
	{(PropertyRNA *)&rna_ParentActuator_object, NULL,
	-1, "mode", 3, "Scene",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ParentActuator_mode_get, ParentActuator_mode_set, NULL, NULL, NULL, NULL, rna_ParentActuator_mode_items, 2, 0
};

PointerPropertyRNA rna_ParentActuator_object = {
	{(PropertyRNA *)&rna_ParentActuator_use_compound, (PropertyRNA *)&rna_ParentActuator_mode,
	-1, "object", 8388609, "Parent Object",
	"Set this object as parent",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ParentActuator_object_get, ParentActuator_object_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_ParentActuator_use_compound = {
	{(PropertyRNA *)&rna_ParentActuator_use_ghost, (PropertyRNA *)&rna_ParentActuator_object,
	-1, "use_compound", 3, "Compound",
	"Add this object shape to the parent shape (only if the parent shape is already compound)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ParentActuator_use_compound_get, ParentActuator_use_compound_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParentActuator_use_ghost = {
	{NULL, (PropertyRNA *)&rna_ParentActuator_use_compound,
	-1, "use_ghost", 3, "Ghost",
	"Make this object ghost while parented",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ParentActuator_use_ghost_get, ParentActuator_use_ghost_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ParentActuator = {
	{(ContainerRNA *)&RNA_StateActuator, (ContainerRNA *)&RNA_Filter2DActuator,
	NULL,
	{(PropertyRNA *)&rna_ParentActuator_mode, (PropertyRNA *)&rna_ParentActuator_use_ghost}},
	"ParentActuator", NULL, NULL, 4, "Parent Actuator",
	"",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* State Actuator */
static EnumPropertyItem rna_StateActuator_operation_items[5] = {
	{0, "SET", 0, "Set State", ""},
	{1, "ADD", 0, "Add State", ""},
	{2, "REMOVE", 0, "Remove State", ""},
	{3, "CHANGE", 0, "Change State", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_StateActuator_operation = {
	{(PropertyRNA *)&rna_StateActuator_states, NULL,
	-1, "operation", 3, "Operation",
	"Select the bit operation on object state mask",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	StateActuator_operation_get, StateActuator_operation_set, NULL, NULL, NULL, NULL, rna_StateActuator_operation_items, 4, 0
};

static int rna_StateActuator_states_default[30] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_StateActuator_states = {
	{NULL, (PropertyRNA *)&rna_StateActuator_operation,
	-1, "states", 3, "State",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {30, 0, 0}, 30,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, StateActuator_states_get, StateActuator_states_set, NULL, NULL, NULL, NULL, 0, rna_StateActuator_states_default
};

StructRNA RNA_StateActuator = {
	{(ContainerRNA *)&RNA_ArmatureActuator, (ContainerRNA *)&RNA_ParentActuator,
	NULL,
	{(PropertyRNA *)&rna_StateActuator_operation, (PropertyRNA *)&rna_StateActuator_states}},
	"StateActuator", NULL, NULL, 4, "State Actuator",
	"Actuator to handle states",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Armature Actuator */
static EnumPropertyItem rna_ArmatureActuator_mode_items[7] = {
	{0, "RUN", 0, "Run Armature", ""},
	{1, "ENABLE", 0, "Enable", ""},
	{2, "DISABLE", 0, "Disable", ""},
	{3, "SETTARGET", 0, "Set Target", ""},
	{4, "SETWEIGHT", 0, "Set Weight", ""},
	{5, "SETINFLUENCE", 0, "Set Influence", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ArmatureActuator_mode = {
	{(PropertyRNA *)&rna_ArmatureActuator_bone, NULL,
	-1, "mode", 3, "Constraint Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ArmatureActuator_mode_get, ArmatureActuator_mode_set, NULL, NULL, NULL, NULL, rna_ArmatureActuator_mode_items, 6, 0
};

StringPropertyRNA rna_ArmatureActuator_bone = {
	{(PropertyRNA *)&rna_ArmatureActuator_constraint, (PropertyRNA *)&rna_ArmatureActuator_mode,
	-1, "bone", 262145, "Bone",
	"Bone on which the constraint is defined",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Actuator_Armature_update, 318767104, NULL, NULL,
	0, -1, NULL},
	ArmatureActuator_bone_get, ArmatureActuator_bone_length, ArmatureActuator_bone_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_ArmatureActuator_constraint = {
	{(PropertyRNA *)&rna_ArmatureActuator_target, (PropertyRNA *)&rna_ArmatureActuator_bone,
	-1, "constraint", 262145, "Constraint",
	"Name of the constraint to control",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Actuator_Armature_update, 318767104, NULL, NULL,
	0, -1, NULL},
	ArmatureActuator_constraint_get, ArmatureActuator_constraint_length, ArmatureActuator_constraint_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_ArmatureActuator_target = {
	{(PropertyRNA *)&rna_ArmatureActuator_secondary_target, (PropertyRNA *)&rna_ArmatureActuator_constraint,
	-1, "target", 8388609, "Target",
	"Set this object as the target of the constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ArmatureActuator_target_get, ArmatureActuator_target_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_ArmatureActuator_secondary_target = {
	{(PropertyRNA *)&rna_ArmatureActuator_weight, (PropertyRNA *)&rna_ArmatureActuator_target,
	-1, "secondary_target", 8388609, "Secondary Target",
	"Set this object as the secondary target of the constraint (only IK polar target at the moment)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ArmatureActuator_secondary_target_get, ArmatureActuator_secondary_target_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_ArmatureActuator_weight = {
	{(PropertyRNA *)&rna_ArmatureActuator_influence, (PropertyRNA *)&rna_ArmatureActuator_secondary_target,
	-1, "weight", 8195, "Weight",
	"Weight of this constraint",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bArmatureActuator, weight), 4, NULL},
	ArmatureActuator_weight_get, ArmatureActuator_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ArmatureActuator_influence = {
	{NULL, (PropertyRNA *)&rna_ArmatureActuator_weight,
	-1, "influence", 8195, "Influence",
	"Influence of this constraint",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bArmatureActuator, influence), 4, NULL},
	ArmatureActuator_influence_get, ArmatureActuator_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ArmatureActuator = {
	{(ContainerRNA *)&RNA_SteeringActuator, (ContainerRNA *)&RNA_StateActuator,
	NULL,
	{(PropertyRNA *)&rna_ArmatureActuator_mode, (PropertyRNA *)&rna_ArmatureActuator_influence}},
	"ArmatureActuator", NULL, NULL, 4, "Armature Actuator",
	"",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Steering Actuator */
static EnumPropertyItem rna_SteeringActuator_mode_items[4] = {
	{0, "SEEK", 0, "Seek", ""},
	{1, "FLEE", 0, "Flee", ""},
	{2, "PATHFOLLOWING", 0, "Path following", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SteeringActuator_mode = {
	{(PropertyRNA *)&rna_SteeringActuator_velocity, NULL,
	-1, "mode", 3, "Behavior",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SteeringActuator_mode_get, SteeringActuator_mode_set, NULL, NULL, NULL, NULL, rna_SteeringActuator_mode_items, 3, 0
};

FloatPropertyRNA rna_SteeringActuator_velocity = {
	{(PropertyRNA *)&rna_SteeringActuator_acceleration, (PropertyRNA *)&rna_SteeringActuator_mode,
	-1, "velocity", 8195, "Velocity",
	"Velocity magnitude",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSteeringActuator, velocity), 4, NULL},
	SteeringActuator_velocity_get, SteeringActuator_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SteeringActuator_acceleration = {
	{(PropertyRNA *)&rna_SteeringActuator_turn_speed, (PropertyRNA *)&rna_SteeringActuator_velocity,
	-1, "acceleration", 8195, "Acceleration",
	"Max acceleration",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSteeringActuator, acceleration), 4, NULL},
	SteeringActuator_acceleration_get, SteeringActuator_acceleration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SteeringActuator_turn_speed = {
	{(PropertyRNA *)&rna_SteeringActuator_distance, (PropertyRNA *)&rna_SteeringActuator_acceleration,
	-1, "turn_speed", 8195, "Turn Speed",
	"Max turn speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSteeringActuator, turnspeed), 4, NULL},
	SteeringActuator_turn_speed_get, SteeringActuator_turn_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 720.0f, 0.0f, 720.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SteeringActuator_distance = {
	{(PropertyRNA *)&rna_SteeringActuator_target, (PropertyRNA *)&rna_SteeringActuator_turn_speed,
	-1, "distance", 8195, "Dist",
	"Relax distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSteeringActuator, dist), 4, NULL},
	SteeringActuator_distance_get, SteeringActuator_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_SteeringActuator_target = {
	{(PropertyRNA *)&rna_SteeringActuator_self_terminated, (PropertyRNA *)&rna_SteeringActuator_distance,
	-1, "target", 8388609, "Target Object",
	"Target object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SteeringActuator_target_get, SteeringActuator_target_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_SteeringActuator_self_terminated = {
	{(PropertyRNA *)&rna_SteeringActuator_show_visualization, (PropertyRNA *)&rna_SteeringActuator_target,
	-1, "self_terminated", 3, "Self Terminated",
	"Terminate when target is reached",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SteeringActuator_self_terminated_get, SteeringActuator_self_terminated_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SteeringActuator_show_visualization = {
	{(PropertyRNA *)&rna_SteeringActuator_update_period, (PropertyRNA *)&rna_SteeringActuator_self_terminated,
	-1, "show_visualization", 3, "Visualize",
	"Enable debug visualization for \'Path following\'",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SteeringActuator_show_visualization_get, SteeringActuator_show_visualization_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SteeringActuator_update_period = {
	{(PropertyRNA *)&rna_SteeringActuator_navmesh, (PropertyRNA *)&rna_SteeringActuator_show_visualization,
	-1, "update_period", 8195, "Update period",
	"Path update period",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSteeringActuator, updateTime), 0, NULL},
	SteeringActuator_update_period_get, SteeringActuator_update_period_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-1, 100000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_SteeringActuator_navmesh = {
	{(PropertyRNA *)&rna_SteeringActuator_facing, (PropertyRNA *)&rna_SteeringActuator_update_period,
	-1, "navmesh", 8388609, "Navigation Mesh Object",
	"Navigation mesh",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SteeringActuator_navmesh_get, SteeringActuator_navmesh_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_SteeringActuator_facing = {
	{(PropertyRNA *)&rna_SteeringActuator_facing_axis, (PropertyRNA *)&rna_SteeringActuator_navmesh,
	-1, "facing", 3, "Facing",
	"Enable automatic facing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SteeringActuator_facing_get, SteeringActuator_facing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SteeringActuator_facing_axis_items[7] = {
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{4, "NEG_X", 0, "-X", ""},
	{5, "NEG_Y", 0, "-Y", ""},
	{6, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SteeringActuator_facing_axis = {
	{(PropertyRNA *)&rna_SteeringActuator_normal_up, (PropertyRNA *)&rna_SteeringActuator_facing,
	-1, "facing_axis", 3, "Axis",
	"Axis for automatic facing",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SteeringActuator_facing_axis_get, SteeringActuator_facing_axis_set, NULL, NULL, NULL, NULL, rna_SteeringActuator_facing_axis_items, 6, 1
};

BoolPropertyRNA rna_SteeringActuator_normal_up = {
	{NULL, (PropertyRNA *)&rna_SteeringActuator_facing_axis,
	-1, "normal_up", 3, "N",
	"Use normal of the navmesh to set \"UP\" vector",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SteeringActuator_normal_up_get, SteeringActuator_normal_up_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SteeringActuator = {
	{(ContainerRNA *)&RNA_MouseActuator, (ContainerRNA *)&RNA_ArmatureActuator,
	NULL,
	{(PropertyRNA *)&rna_SteeringActuator_mode, (PropertyRNA *)&rna_SteeringActuator_normal_up}},
	"SteeringActuator", NULL, NULL, 4, "Steering Actuator",
	"",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mouse Actuator */
static EnumPropertyItem rna_MouseActuator_mode_items[3] = {
	{0, "VISIBILITY", 0, "Visibility", ""},
	{1, "LOOK", 0, "Look", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MouseActuator_mode = {
	{(PropertyRNA *)&rna_MouseActuator_visible, NULL,
	-1, "mode", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_mode_get, MouseActuator_mode_set, NULL, NULL, NULL, NULL, rna_MouseActuator_mode_items, 2, 0
};

BoolPropertyRNA rna_MouseActuator_visible = {
	{(PropertyRNA *)&rna_MouseActuator_use_axis_x, (PropertyRNA *)&rna_MouseActuator_mode,
	-1, "visible", 3, "Visible",
	"Make mouse cursor visible",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_visible_get, MouseActuator_visible_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MouseActuator_use_axis_x = {
	{(PropertyRNA *)&rna_MouseActuator_use_axis_y, (PropertyRNA *)&rna_MouseActuator_visible,
	-1, "use_axis_x", 3, "Use X Axis",
	"Calculate mouse movement on the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_use_axis_x_get, MouseActuator_use_axis_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MouseActuator_use_axis_y = {
	{(PropertyRNA *)&rna_MouseActuator_reset_x, (PropertyRNA *)&rna_MouseActuator_use_axis_x,
	-1, "use_axis_y", 3, "Use Y Axis",
	"Calculate mouse movement on the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_use_axis_y_get, MouseActuator_use_axis_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MouseActuator_reset_x = {
	{(PropertyRNA *)&rna_MouseActuator_reset_y, (PropertyRNA *)&rna_MouseActuator_use_axis_y,
	-1, "reset_x", 3, "Reset",
	"Reset the cursor\'s X position to the center of the screen space after calculating",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_reset_x_get, MouseActuator_reset_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MouseActuator_reset_y = {
	{(PropertyRNA *)&rna_MouseActuator_local_x, (PropertyRNA *)&rna_MouseActuator_reset_x,
	-1, "reset_y", 3, "Reset",
	"Reset the cursor\'s Y position to the center of the screen space after calculating",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_reset_y_get, MouseActuator_reset_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MouseActuator_local_x = {
	{(PropertyRNA *)&rna_MouseActuator_local_y, (PropertyRNA *)&rna_MouseActuator_reset_y,
	-1, "local_x", 3, "Local",
	"Apply rotation locally",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_local_x_get, MouseActuator_local_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MouseActuator_local_y = {
	{(PropertyRNA *)&rna_MouseActuator_threshold_x, (PropertyRNA *)&rna_MouseActuator_local_x,
	-1, "local_y", 3, "Local",
	"Apply rotation locally",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_local_y_get, MouseActuator_local_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MouseActuator_threshold_x = {
	{(PropertyRNA *)&rna_MouseActuator_threshold_y, (PropertyRNA *)&rna_MouseActuator_local_y,
	-1, "threshold_x", 8195, "Threshold",
	"Amount of X motion before mouse movement will register",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bMouseActuator, threshold[0]), 4, NULL},
	MouseActuator_threshold_x_get, MouseActuator_threshold_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.5000000000f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MouseActuator_threshold_y = {
	{(PropertyRNA *)&rna_MouseActuator_object_axis_x, (PropertyRNA *)&rna_MouseActuator_threshold_x,
	-1, "threshold_y", 8195, "Threshold",
	"Amount of Y motion before mouse movement will register",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bMouseActuator, threshold[1]), 4, NULL},
	MouseActuator_threshold_y_get, MouseActuator_threshold_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.5000000000f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_MouseActuator_object_axis_x_items[4] = {
	{0, "OBJECT_AXIS_X", 0, "X Axis", ""},
	{1, "OBJECT_AXIS_Y", 0, "Y Axis", ""},
	{2, "OBJECT_AXIS_Z", 0, "Z Axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MouseActuator_object_axis_x = {
	{(PropertyRNA *)&rna_MouseActuator_object_axis_y, (PropertyRNA *)&rna_MouseActuator_threshold_y,
	-1, "object_axis_x", 3, "Object Axis",
	"Local object axis mouse movement in the X direction will apply to",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_object_axis_x_get, MouseActuator_object_axis_x_set, NULL, NULL, NULL, NULL, rna_MouseActuator_object_axis_x_items, 3, 0
};

static EnumPropertyItem rna_MouseActuator_object_axis_y_items[4] = {
	{0, "OBJECT_AXIS_X", 0, "X Axis", ""},
	{1, "OBJECT_AXIS_Y", 0, "Y Axis", ""},
	{2, "OBJECT_AXIS_Z", 0, "Z Axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MouseActuator_object_axis_y = {
	{(PropertyRNA *)&rna_MouseActuator_sensitivity_x, (PropertyRNA *)&rna_MouseActuator_object_axis_x,
	-1, "object_axis_y", 3, "Object Axis",
	"Local object axis mouse movement in the Y direction will apply to",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseActuator_object_axis_y_get, MouseActuator_object_axis_y_set, NULL, NULL, NULL, NULL, rna_MouseActuator_object_axis_y_items, 3, 0
};

FloatPropertyRNA rna_MouseActuator_sensitivity_x = {
	{(PropertyRNA *)&rna_MouseActuator_sensitivity_y, (PropertyRNA *)&rna_MouseActuator_object_axis_y,
	-1, "sensitivity_x", 8195, "Sensitivity",
	"Sensitivity of the X axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bMouseActuator, sensitivity[0]), 4, NULL},
	MouseActuator_sensitivity_x_get, MouseActuator_sensitivity_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 0.2000000030f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MouseActuator_sensitivity_y = {
	{(PropertyRNA *)&rna_MouseActuator_min_x, (PropertyRNA *)&rna_MouseActuator_sensitivity_x,
	-1, "sensitivity_y", 8195, "Sensitivity",
	"Sensitivity of the Y axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bMouseActuator, sensitivity[1]), 4, NULL},
	MouseActuator_sensitivity_y_get, MouseActuator_sensitivity_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 0.2000000030f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MouseActuator_min_x = {
	{(PropertyRNA *)&rna_MouseActuator_max_x, (PropertyRNA *)&rna_MouseActuator_sensitivity_y,
	-1, "min_x", 8195, "Min",
	"Maximum negative rotation allowed by X mouse movement (0 for infinite)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bMouseActuator, limit_x[0]), 4, NULL},
	MouseActuator_min_x_get, MouseActuator_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -62.8318519592f, 0.0f, -FLT_MAX, FLT_MAX, 9.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MouseActuator_max_x = {
	{(PropertyRNA *)&rna_MouseActuator_min_y, (PropertyRNA *)&rna_MouseActuator_min_x,
	-1, "max_x", 8195, "Max",
	"Maximum positive rotation allowed by X mouse movement (0 for infinite)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bMouseActuator, limit_x[1]), 4, NULL},
	MouseActuator_max_x_get, MouseActuator_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 62.8318519592f, -FLT_MAX, FLT_MAX, 9.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MouseActuator_min_y = {
	{(PropertyRNA *)&rna_MouseActuator_max_y, (PropertyRNA *)&rna_MouseActuator_max_x,
	-1, "min_y", 8195, "Min",
	"Maximum negative rotation allowed by Y mouse movement (0 for infinite)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bMouseActuator, limit_y[0]), 4, NULL},
	MouseActuator_min_y_get, MouseActuator_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -62.8318519592f, 0.0f, -FLT_MAX, FLT_MAX, 9.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MouseActuator_max_y = {
	{NULL, (PropertyRNA *)&rna_MouseActuator_min_y,
	-1, "max_y", 8195, "Max",
	"Maximum positive rotation allowed by Y mouse movement (0 for infinite)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bMouseActuator, limit_y[1]), 4, NULL},
	MouseActuator_max_y_get, MouseActuator_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 62.8318519592f, -FLT_MAX, FLT_MAX, 9.0f, 3, 0.0f, NULL
};

StructRNA RNA_MouseActuator = {
	{(ContainerRNA *)&RNA_Armature, (ContainerRNA *)&RNA_SteeringActuator,
	NULL,
	{(PropertyRNA *)&rna_MouseActuator_mode, (PropertyRNA *)&rna_MouseActuator_max_y}},
	"MouseActuator", NULL, NULL, 4, "Mouse Actuator",
	"",
	"*", 17,
	(PropertyRNA *)&rna_Actuator_name, (PropertyRNA *)&rna_Actuator_rna_properties,
	&RNA_Actuator,
	NULL,
	rna_Actuator_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

