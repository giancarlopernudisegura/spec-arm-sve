
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

#include "rna_brush.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

EnumPropertyRNA rna_Brush_blend;
EnumPropertyRNA rna_Brush_sculpt_tool;
EnumPropertyRNA rna_Brush_vertex_tool;
EnumPropertyRNA rna_Brush_image_tool;
EnumPropertyRNA rna_Brush_direction;
EnumPropertyRNA rna_Brush_stroke_method;
EnumPropertyRNA rna_Brush_texture_angle_source_random;
EnumPropertyRNA rna_Brush_texture_angle_source_no_random;
EnumPropertyRNA rna_Brush_sculpt_plane;
EnumPropertyRNA rna_Brush_mask_tool;
IntPropertyRNA rna_Brush_size;
FloatPropertyRNA rna_Brush_unprojected_radius;
FloatPropertyRNA rna_Brush_jitter;
IntPropertyRNA rna_Brush_jitter_absolute;
IntPropertyRNA rna_Brush_spacing;
IntPropertyRNA rna_Brush_grad_spacing;
IntPropertyRNA rna_Brush_smooth_stroke_radius;
FloatPropertyRNA rna_Brush_smooth_stroke_factor;
FloatPropertyRNA rna_Brush_rate;
FloatPropertyRNA rna_Brush_color;
FloatPropertyRNA rna_Brush_secondary_color;
FloatPropertyRNA rna_Brush_weight;
FloatPropertyRNA rna_Brush_strength;
FloatPropertyRNA rna_Brush_plane_offset;
FloatPropertyRNA rna_Brush_plane_trim;
FloatPropertyRNA rna_Brush_height;
FloatPropertyRNA rna_Brush_texture_sample_bias;
FloatPropertyRNA rna_Brush_normal_weight;
FloatPropertyRNA rna_Brush_crease_pinch_factor;
FloatPropertyRNA rna_Brush_auto_smooth_factor;
FloatPropertyRNA rna_Brush_stencil_pos;
FloatPropertyRNA rna_Brush_stencil_dimension;
FloatPropertyRNA rna_Brush_mask_stencil_pos;
FloatPropertyRNA rna_Brush_mask_stencil_dimension;
FloatPropertyRNA rna_Brush_sharp_threshold;
FloatPropertyRNA rna_Brush_fill_threshold;
IntPropertyRNA rna_Brush_blur_kernel_radius;
EnumPropertyRNA rna_Brush_blur_mode;
BoolPropertyRNA rna_Brush_use_airbrush;
BoolPropertyRNA rna_Brush_use_original_normal;
BoolPropertyRNA rna_Brush_use_wrap;
BoolPropertyRNA rna_Brush_use_pressure_strength;
BoolPropertyRNA rna_Brush_use_offset_pressure;
BoolPropertyRNA rna_Brush_use_pressure_size;
BoolPropertyRNA rna_Brush_use_gradient;
BoolPropertyRNA rna_Brush_use_pressure_jitter;
BoolPropertyRNA rna_Brush_use_pressure_spacing;
EnumPropertyRNA rna_Brush_use_pressure_masking;
BoolPropertyRNA rna_Brush_use_inverse_smooth_pressure;
BoolPropertyRNA rna_Brush_use_rake;
BoolPropertyRNA rna_Brush_use_relative_jitter;
BoolPropertyRNA rna_Brush_use_random_rotation;
BoolPropertyRNA rna_Brush_use_plane_trim;
BoolPropertyRNA rna_Brush_use_frontface;
BoolPropertyRNA rna_Brush_use_anchor;
BoolPropertyRNA rna_Brush_use_space;
BoolPropertyRNA rna_Brush_use_line;
BoolPropertyRNA rna_Brush_use_curve;
BoolPropertyRNA rna_Brush_use_smooth_stroke;
BoolPropertyRNA rna_Brush_use_persistent;
BoolPropertyRNA rna_Brush_use_accumulate;
BoolPropertyRNA rna_Brush_use_space_attenuation;
BoolPropertyRNA rna_Brush_use_adaptive_space;
BoolPropertyRNA rna_Brush_use_locked_size;
BoolPropertyRNA rna_Brush_use_edge_to_edge;
BoolPropertyRNA rna_Brush_use_restore_mesh;
BoolPropertyRNA rna_Brush_use_alpha;
PointerPropertyRNA rna_Brush_curve;
PointerPropertyRNA rna_Brush_paint_curve;
PointerPropertyRNA rna_Brush_gradient;
EnumPropertyRNA rna_Brush_gradient_stroke_mode;
EnumPropertyRNA rna_Brush_gradient_fill_mode;
BoolPropertyRNA rna_Brush_use_primary_overlay;
BoolPropertyRNA rna_Brush_use_secondary_overlay;
BoolPropertyRNA rna_Brush_use_cursor_overlay;
BoolPropertyRNA rna_Brush_use_cursor_overlay_override;
BoolPropertyRNA rna_Brush_use_primary_overlay_override;
BoolPropertyRNA rna_Brush_use_secondary_overlay_override;
BoolPropertyRNA rna_Brush_use_paint_sculpt;
BoolPropertyRNA rna_Brush_use_paint_vertex;
BoolPropertyRNA rna_Brush_use_paint_weight;
BoolPropertyRNA rna_Brush_use_paint_image;
PointerPropertyRNA rna_Brush_texture_slot;
PointerPropertyRNA rna_Brush_texture;
PointerPropertyRNA rna_Brush_mask_texture_slot;
PointerPropertyRNA rna_Brush_mask_texture;
IntPropertyRNA rna_Brush_texture_overlay_alpha;
IntPropertyRNA rna_Brush_mask_overlay_alpha;
IntPropertyRNA rna_Brush_cursor_overlay_alpha;
FloatPropertyRNA rna_Brush_cursor_color_add;
FloatPropertyRNA rna_Brush_cursor_color_subtract;
BoolPropertyRNA rna_Brush_use_custom_icon;
StringPropertyRNA rna_Brush_icon_filepath;
PointerPropertyRNA rna_Brush_clone_image;
FloatPropertyRNA rna_Brush_clone_alpha;
FloatPropertyRNA rna_Brush_clone_offset;
PointerPropertyRNA rna_Brush_brush_capabilities;
PointerPropertyRNA rna_Brush_sculpt_capabilities;
PointerPropertyRNA rna_Brush_image_paint_capabilities;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_BrushCapabilities_rna_properties;
PointerPropertyRNA rna_BrushCapabilities_rna_type;
BoolPropertyRNA rna_BrushCapabilities_has_overlay;
BoolPropertyRNA rna_BrushCapabilities_has_random_texture_angle;
BoolPropertyRNA rna_BrushCapabilities_has_texture_angle;
BoolPropertyRNA rna_BrushCapabilities_has_texture_angle_source;
BoolPropertyRNA rna_BrushCapabilities_has_spacing;
BoolPropertyRNA rna_BrushCapabilities_has_smooth_stroke;


CollectionPropertyRNA rna_SculptToolCapabilities_rna_properties;
PointerPropertyRNA rna_SculptToolCapabilities_rna_type;
BoolPropertyRNA rna_SculptToolCapabilities_has_accumulate;
BoolPropertyRNA rna_SculptToolCapabilities_has_auto_smooth;
BoolPropertyRNA rna_SculptToolCapabilities_has_height;
BoolPropertyRNA rna_SculptToolCapabilities_has_jitter;
BoolPropertyRNA rna_SculptToolCapabilities_has_normal_weight;
BoolPropertyRNA rna_SculptToolCapabilities_has_persistence;
BoolPropertyRNA rna_SculptToolCapabilities_has_pinch_factor;
BoolPropertyRNA rna_SculptToolCapabilities_has_plane_offset;
BoolPropertyRNA rna_SculptToolCapabilities_has_random_texture_angle;
BoolPropertyRNA rna_SculptToolCapabilities_has_sculpt_plane;
BoolPropertyRNA rna_SculptToolCapabilities_has_secondary_color;
BoolPropertyRNA rna_SculptToolCapabilities_has_smooth_stroke;
BoolPropertyRNA rna_SculptToolCapabilities_has_space_attenuation;
BoolPropertyRNA rna_SculptToolCapabilities_has_strength_pressure;
BoolPropertyRNA rna_SculptToolCapabilities_has_gravity;


CollectionPropertyRNA rna_ImapaintToolCapabilities_rna_properties;
PointerPropertyRNA rna_ImapaintToolCapabilities_rna_type;
BoolPropertyRNA rna_ImapaintToolCapabilities_has_accumulate;
BoolPropertyRNA rna_ImapaintToolCapabilities_has_space_attenuation;
BoolPropertyRNA rna_ImapaintToolCapabilities_has_radius;


extern CollectionPropertyRNA rna_TextureSlot_rna_properties;
extern PointerPropertyRNA rna_TextureSlot_rna_type;
extern PointerPropertyRNA rna_TextureSlot_texture;
extern StringPropertyRNA rna_TextureSlot_name;
extern FloatPropertyRNA rna_TextureSlot_offset;
extern FloatPropertyRNA rna_TextureSlot_scale;
extern FloatPropertyRNA rna_TextureSlot_color;
extern EnumPropertyRNA rna_TextureSlot_blend_type;
extern BoolPropertyRNA rna_TextureSlot_use_stencil;
extern BoolPropertyRNA rna_TextureSlot_invert;
extern BoolPropertyRNA rna_TextureSlot_use_rgb_to_intensity;
extern FloatPropertyRNA rna_TextureSlot_default_value;
extern EnumPropertyRNA rna_TextureSlot_output_node;

FloatPropertyRNA rna_BrushTextureSlot_angle;
EnumPropertyRNA rna_BrushTextureSlot_map_mode;
EnumPropertyRNA rna_BrushTextureSlot_tex_paint_map_mode;
EnumPropertyRNA rna_BrushTextureSlot_mask_map_mode;


extern CollectionPropertyRNA rna_PropertyGroup_rna_properties;
extern PointerPropertyRNA rna_PropertyGroup_rna_type;
extern StringPropertyRNA rna_PropertyGroup_name;

FloatPropertyRNA rna_OperatorStrokeElement_location;
FloatPropertyRNA rna_OperatorStrokeElement_mouse;
FloatPropertyRNA rna_OperatorStrokeElement_pressure;
FloatPropertyRNA rna_OperatorStrokeElement_size;
BoolPropertyRNA rna_OperatorStrokeElement_pen_flip;
FloatPropertyRNA rna_OperatorStrokeElement_time;
BoolPropertyRNA rna_OperatorStrokeElement_is_start;

int Brush_blend_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->blend);
}

void Brush_blend_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->blend = value;
}

int Brush_sculpt_tool_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->sculpt_tool);
}

void Brush_sculpt_tool_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->sculpt_tool = value;
}

int Brush_vertex_tool_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->vertexpaint_tool);
}

void Brush_vertex_tool_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->vertexpaint_tool = value;
}

int Brush_image_tool_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->imagepaint_tool);
}

void Brush_image_tool_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->imagepaint_tool = value;
}

int Brush_direction_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return ((data->flag) & 512);
}

void Brush_direction_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->flag &= ~512;
	data->flag |= value;
}

int Brush_stroke_method_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return ((data->flag) & -1602222847);
}

void Brush_stroke_method_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->flag &= ~-1602222847;
	data->flag |= value;
}

int Brush_texture_angle_source_random_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return ((data->flag) & 33554560);
}

void Brush_texture_angle_source_random_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->flag &= ~33554560;
	data->flag |= value;
}

int Brush_texture_angle_source_no_random_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return ((data->flag) & 128);
}

void Brush_texture_angle_source_no_random_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->flag &= ~128;
	data->flag |= value;
}

int Brush_sculpt_plane_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->sculpt_plane);
}

void Brush_sculpt_plane_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->sculpt_plane = value;
}

int Brush_mask_tool_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->mask_tool);
}

void Brush_mask_tool_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->mask_tool = value;
}

int Brush_size_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->size);
}

void Brush_size_set(PointerRNA *ptr, int value)
{
	rna_Brush_set_size(ptr, value);
}

float Brush_unprojected_radius_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->unprojected_radius);
}

void Brush_unprojected_radius_set(PointerRNA *ptr, float value)
{
	rna_Brush_set_unprojected_radius(ptr, value);
}

float Brush_jitter_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->jitter);
}

void Brush_jitter_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->jitter = CLAMPIS(value, 0.0f, 1000.0f);
}

int Brush_jitter_absolute_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->jitter_absolute);
}

void Brush_jitter_absolute_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->jitter_absolute = CLAMPIS(value, 0, 1000000);
}

int Brush_spacing_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->spacing);
}

void Brush_spacing_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->spacing = CLAMPIS(value, 1, 1000);
}

int Brush_grad_spacing_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->gradient_spacing);
}

void Brush_grad_spacing_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->gradient_spacing = CLAMPIS(value, 1, 10000);
}

int Brush_smooth_stroke_radius_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->smooth_stroke_radius);
}

void Brush_smooth_stroke_radius_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->smooth_stroke_radius = CLAMPIS(value, 10, 200);
}

float Brush_smooth_stroke_factor_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->smooth_stroke_factor);
}

void Brush_smooth_stroke_factor_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->smooth_stroke_factor = CLAMPIS(value, 0.5000000000f, 0.9900000095f);
}

float Brush_rate_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->rate);
}

void Brush_rate_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->rate = CLAMPIS(value, 0.0001000000f, 10000.0f);
}

void Brush_color_get(PointerRNA *ptr, float values[3])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->rgb)[i]);
	}
}

void Brush_color_set(PointerRNA *ptr, const float values[3])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

void Brush_secondary_color_get(PointerRNA *ptr, float values[3])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->secondary_rgb)[i]);
	}
}

void Brush_secondary_color_set(PointerRNA *ptr, const float values[3])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->secondary_rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

float Brush_weight_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->weight);
}

void Brush_weight_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_strength_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->alpha);
}

void Brush_strength_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->alpha = CLAMPIS(value, 0.0f, 10.0f);
}

float Brush_plane_offset_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->plane_offset);
}

void Brush_plane_offset_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->plane_offset = CLAMPIS(value, -2.0f, 2.0f);
}

float Brush_plane_trim_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->plane_trim);
}

void Brush_plane_trim_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->plane_trim = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_height_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->height);
}

void Brush_height_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->height = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_texture_sample_bias_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->texture_sample_bias);
}

void Brush_texture_sample_bias_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->texture_sample_bias = CLAMPIS(value, -1.0f, 1.0f);
}

float Brush_normal_weight_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->normal_weight);
}

void Brush_normal_weight_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->normal_weight = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_crease_pinch_factor_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->crease_pinch_factor);
}

void Brush_crease_pinch_factor_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->crease_pinch_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_auto_smooth_factor_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->autosmooth_factor);
}

void Brush_auto_smooth_factor_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->autosmooth_factor = CLAMPIS(value, 0.0f, 1.0f);
}

void Brush_stencil_pos_get(PointerRNA *ptr, float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->stencil_pos)[i]);
	}
}

void Brush_stencil_pos_set(PointerRNA *ptr, const float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->stencil_pos)[i] = values[i];
	}
}

void Brush_stencil_dimension_get(PointerRNA *ptr, float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->stencil_dimension)[i]);
	}
}

void Brush_stencil_dimension_set(PointerRNA *ptr, const float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->stencil_dimension)[i] = values[i];
	}
}

void Brush_mask_stencil_pos_get(PointerRNA *ptr, float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->mask_stencil_pos)[i]);
	}
}

void Brush_mask_stencil_pos_set(PointerRNA *ptr, const float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->mask_stencil_pos)[i] = values[i];
	}
}

void Brush_mask_stencil_dimension_get(PointerRNA *ptr, float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->mask_stencil_dimension)[i]);
	}
}

void Brush_mask_stencil_dimension_set(PointerRNA *ptr, const float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->mask_stencil_dimension)[i] = values[i];
	}
}

float Brush_sharp_threshold_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->sharp_threshold);
}

void Brush_sharp_threshold_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->sharp_threshold = CLAMPIS(value, 0.0f, 100.0f);
}

float Brush_fill_threshold_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->fill_threshold);
}

void Brush_fill_threshold_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->fill_threshold = CLAMPIS(value, 0.0f, 100.0f);
}

int Brush_blur_kernel_radius_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->blur_kernel_radius);
}

void Brush_blur_kernel_radius_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->blur_kernel_radius = CLAMPIS(value, 1, 10000);
}

int Brush_blur_mode_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->blur_mode);
}

void Brush_blur_mode_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->blur_mode = value;
}

int Brush_use_airbrush_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Brush_use_airbrush_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int Brush_use_original_normal_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void Brush_use_original_normal_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 32768;
	else data->flag &= ~32768;
}

int Brush_use_wrap_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void Brush_use_wrap_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int Brush_use_pressure_strength_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void Brush_use_pressure_strength_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int Brush_use_offset_pressure_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void Brush_use_offset_pressure_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 65536;
	else data->flag &= ~65536;
}

int Brush_use_pressure_size_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void Brush_use_pressure_size_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int Brush_use_gradient_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void Brush_use_gradient_set(PointerRNA *ptr, int value)
{
	rna_Brush_use_gradient_set(ptr, value);
}

int Brush_use_pressure_jitter_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void Brush_use_pressure_jitter_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int Brush_use_pressure_spacing_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Brush_use_pressure_spacing_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int Brush_use_pressure_masking_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->mask_pressure);
}

void Brush_use_pressure_masking_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->mask_pressure = value;
}

int Brush_use_inverse_smooth_pressure_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 16777216) != 0);
}

void Brush_use_inverse_smooth_pressure_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 16777216;
	else data->flag &= ~16777216;
}

int Brush_use_rake_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void Brush_use_rake_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int Brush_use_relative_jitter_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return !(((data->flag) & 1073741824) != 0);
}

void Brush_use_relative_jitter_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (!value) data->flag |= 1073741824;
	else data->flag &= ~1073741824;
}

int Brush_use_random_rotation_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 33554432) != 0);
}

void Brush_use_random_rotation_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 33554432;
	else data->flag &= ~33554432;
}

int Brush_use_plane_trim_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 67108864) != 0);
}

void Brush_use_plane_trim_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 67108864;
	else data->flag &= ~67108864;
}

int Brush_use_frontface_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 134217728) != 0);
}

void Brush_use_frontface_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 134217728;
	else data->flag &= ~134217728;
}

int Brush_use_anchor_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void Brush_use_anchor_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int Brush_use_space_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void Brush_use_space_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int Brush_use_line_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 536870912) != 0);
}

void Brush_use_line_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 536870912;
	else data->flag &= ~536870912;
}

int Brush_use_curve_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & INT_MIN) != 0);
}

void Brush_use_curve_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= INT_MIN;
	else data->flag &= ~INT_MIN;
}

int Brush_use_smooth_stroke_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void Brush_use_smooth_stroke_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int Brush_use_persistent_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void Brush_use_persistent_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int Brush_use_accumulate_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void Brush_use_accumulate_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int Brush_use_space_attenuation_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 262144) != 0);
}

void Brush_use_space_attenuation_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 262144;
	else data->flag &= ~262144;
}

int Brush_use_adaptive_space_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void Brush_use_adaptive_space_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int Brush_use_locked_size_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 1048576) != 0);
}

void Brush_use_locked_size_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 1048576;
	else data->flag &= ~1048576;
}

int Brush_use_edge_to_edge_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 4194304) != 0);
}

void Brush_use_edge_to_edge_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 4194304;
	else data->flag &= ~4194304;
}

int Brush_use_restore_mesh_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 8388608) != 0);
}

void Brush_use_restore_mesh_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 8388608;
	else data->flag &= ~8388608;
}

int Brush_use_alpha_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return !(((data->flag) & 16384) != 0);
}

void Brush_use_alpha_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (!value) data->flag |= 16384;
	else data->flag &= ~16384;
}

PointerRNA Brush_curve_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

PointerRNA Brush_paint_curve_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PaintCurve, data->paint_curve);
}

void Brush_paint_curve_set(PointerRNA *ptr, PointerRNA value)
{
	Brush *data = (Brush *)(ptr->data);

	if (data->paint_curve)
		id_us_min((ID *)data->paint_curve);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->paint_curve = value.data;
}

PointerRNA Brush_gradient_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->gradient);
}

int Brush_gradient_stroke_mode_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->gradient_stroke_mode);
}

void Brush_gradient_stroke_mode_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->gradient_stroke_mode = value;
}

int Brush_gradient_fill_mode_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->gradient_fill_mode);
}

void Brush_gradient_fill_mode_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->gradient_fill_mode = value;
}

int Brush_use_primary_overlay_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->overlay_flags) & 2) != 0);
}

void Brush_use_primary_overlay_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->overlay_flags |= 2;
	else data->overlay_flags &= ~2;
}

int Brush_use_secondary_overlay_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->overlay_flags) & 4) != 0);
}

void Brush_use_secondary_overlay_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->overlay_flags |= 4;
	else data->overlay_flags &= ~4;
}

int Brush_use_cursor_overlay_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->overlay_flags) & 1) != 0);
}

void Brush_use_cursor_overlay_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->overlay_flags |= 1;
	else data->overlay_flags &= ~1;
}

int Brush_use_cursor_overlay_override_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->overlay_flags) & 8) != 0);
}

void Brush_use_cursor_overlay_override_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->overlay_flags |= 8;
	else data->overlay_flags &= ~8;
}

int Brush_use_primary_overlay_override_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->overlay_flags) & 16) != 0);
}

void Brush_use_primary_overlay_override_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->overlay_flags |= 16;
	else data->overlay_flags &= ~16;
}

int Brush_use_secondary_overlay_override_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->overlay_flags) & 32) != 0);
}

void Brush_use_secondary_overlay_override_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->overlay_flags |= 32;
	else data->overlay_flags &= ~32;
}

int Brush_use_paint_sculpt_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->ob_mode) & 2) != 0);
}

void Brush_use_paint_sculpt_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->ob_mode |= 2;
	else data->ob_mode &= ~2;
}

int Brush_use_paint_vertex_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->ob_mode) & 4) != 0);
}

void Brush_use_paint_vertex_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->ob_mode |= 4;
	else data->ob_mode &= ~4;
}

int Brush_use_paint_weight_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->ob_mode) & 8) != 0);
}

void Brush_use_paint_weight_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->ob_mode |= 8;
	else data->ob_mode &= ~8;
}

int Brush_use_paint_image_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->ob_mode) & 16) != 0);
}

void Brush_use_paint_image_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->ob_mode |= 16;
	else data->ob_mode &= ~16;
}

PointerRNA Brush_texture_slot_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_BrushTextureSlot, &data->mtex);
}

PointerRNA Brush_texture_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mtex.tex);
}

void Brush_texture_set(PointerRNA *ptr, PointerRNA value)
{
	Brush *data = (Brush *)(ptr->data);

	if (data->mtex.tex)
		id_us_min((ID *)data->mtex.tex);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->mtex.tex = value.data;
}

PointerRNA Brush_mask_texture_slot_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_BrushTextureSlot, &data->mask_mtex);
}

PointerRNA Brush_mask_texture_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mask_mtex.tex);
}

void Brush_mask_texture_set(PointerRNA *ptr, PointerRNA value)
{
	Brush *data = (Brush *)(ptr->data);

	if (data->mask_mtex.tex)
		id_us_min((ID *)data->mask_mtex.tex);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->mask_mtex.tex = value.data;
}

int Brush_texture_overlay_alpha_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->texture_overlay_alpha);
}

void Brush_texture_overlay_alpha_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->texture_overlay_alpha = CLAMPIS(value, 0, 100);
}

int Brush_mask_overlay_alpha_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->mask_overlay_alpha);
}

void Brush_mask_overlay_alpha_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->mask_overlay_alpha = CLAMPIS(value, 0, 100);
}

int Brush_cursor_overlay_alpha_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (int)(data->cursor_overlay_alpha);
}

void Brush_cursor_overlay_alpha_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	data->cursor_overlay_alpha = CLAMPIS(value, 0, 100);
}

void Brush_cursor_color_add_get(PointerRNA *ptr, float values[3])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->add_col)[i]);
	}
}

void Brush_cursor_color_add_set(PointerRNA *ptr, const float values[3])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->add_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void Brush_cursor_color_subtract_get(PointerRNA *ptr, float values[3])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->sub_col)[i]);
	}
}

void Brush_cursor_color_subtract_set(PointerRNA *ptr, const float values[3])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->sub_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int Brush_use_custom_icon_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (((data->flag) & 268435456) != 0);
}

void Brush_use_custom_icon_set(PointerRNA *ptr, int value)
{
	Brush *data = (Brush *)(ptr->data);
	if (value) data->flag |= 268435456;
	else data->flag &= ~268435456;
}

void Brush_icon_filepath_get(PointerRNA *ptr, char *value)
{
	Brush *data = (Brush *)(ptr->data);
	BLI_strncpy(value, data->icon_filepath, 1024);
}

int Brush_icon_filepath_length(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return strlen(data->icon_filepath);
}

void Brush_icon_filepath_set(PointerRNA *ptr, const char *value)
{
	Brush *data = (Brush *)(ptr->data);
	BLI_strncpy(data->icon_filepath, value, 1024);
}

PointerRNA Brush_clone_image_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->clone.image);
}

void Brush_clone_image_set(PointerRNA *ptr, PointerRNA value)
{
	Brush *data = (Brush *)(ptr->data);

	if (data->clone.image)
		id_us_min((ID *)data->clone.image);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->clone.image = value.data;
}

float Brush_clone_alpha_get(PointerRNA *ptr)
{
	Brush *data = (Brush *)(ptr->data);
	return (float)(data->clone.alpha);
}

void Brush_clone_alpha_set(PointerRNA *ptr, float value)
{
	Brush *data = (Brush *)(ptr->data);
	data->clone.alpha = CLAMPIS(value, 0.0f, 1.0f);
}

void Brush_clone_offset_get(PointerRNA *ptr, float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->clone.offset)[i]);
	}
}

void Brush_clone_offset_set(PointerRNA *ptr, const float values[2])
{
	Brush *data = (Brush *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->clone.offset)[i] = values[i];
	}
}

PointerRNA Brush_brush_capabilities_get(PointerRNA *ptr)
{
	return rna_Brush_capabilities_get(ptr);
}

PointerRNA Brush_sculpt_capabilities_get(PointerRNA *ptr)
{
	return rna_Sculpt_tool_capabilities_get(ptr);
}

PointerRNA Brush_image_paint_capabilities_get(PointerRNA *ptr)
{
	return rna_Imapaint_tool_capabilities_get(ptr);
}

static PointerRNA BrushCapabilities_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BrushCapabilities_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BrushCapabilities_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BrushCapabilities_rna_properties_get(iter);
}

void BrushCapabilities_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BrushCapabilities_rna_properties_get(iter);
}

void BrushCapabilities_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BrushCapabilities_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BrushCapabilities_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BrushCapabilities_has_overlay_get(PointerRNA *ptr)
{
	return rna_BrushCapabilities_has_overlay_get(ptr);
}

int BrushCapabilities_has_random_texture_angle_get(PointerRNA *ptr)
{
	return rna_BrushCapabilities_has_random_texture_angle_get(ptr);
}

int BrushCapabilities_has_texture_angle_get(PointerRNA *ptr)
{
	return rna_BrushCapabilities_has_texture_angle_get(ptr);
}

int BrushCapabilities_has_texture_angle_source_get(PointerRNA *ptr)
{
	return rna_BrushCapabilities_has_texture_angle_source_get(ptr);
}

int BrushCapabilities_has_spacing_get(PointerRNA *ptr)
{
	return rna_BrushCapabilities_has_spacing_get(ptr);
}

int BrushCapabilities_has_smooth_stroke_get(PointerRNA *ptr)
{
	return rna_BrushCapabilities_has_smooth_stroke_get(ptr);
}

static PointerRNA SculptToolCapabilities_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SculptToolCapabilities_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SculptToolCapabilities_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SculptToolCapabilities_rna_properties_get(iter);
}

void SculptToolCapabilities_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SculptToolCapabilities_rna_properties_get(iter);
}

void SculptToolCapabilities_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SculptToolCapabilities_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SculptToolCapabilities_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SculptToolCapabilities_has_accumulate_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_accumulate_get(ptr);
}

int SculptToolCapabilities_has_auto_smooth_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_auto_smooth_get(ptr);
}

int SculptToolCapabilities_has_height_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_height_get(ptr);
}

int SculptToolCapabilities_has_jitter_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_jitter_get(ptr);
}

int SculptToolCapabilities_has_normal_weight_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_normal_weight_get(ptr);
}

int SculptToolCapabilities_has_persistence_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_persistence_get(ptr);
}

int SculptToolCapabilities_has_pinch_factor_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_pinch_factor_get(ptr);
}

int SculptToolCapabilities_has_plane_offset_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_plane_offset_get(ptr);
}

int SculptToolCapabilities_has_random_texture_angle_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_random_texture_angle_get(ptr);
}

int SculptToolCapabilities_has_sculpt_plane_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_sculpt_plane_get(ptr);
}

int SculptToolCapabilities_has_secondary_color_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_secondary_color_get(ptr);
}

int SculptToolCapabilities_has_smooth_stroke_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_smooth_stroke_get(ptr);
}

int SculptToolCapabilities_has_space_attenuation_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_space_attenuation_get(ptr);
}

int SculptToolCapabilities_has_strength_pressure_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_strength_pressure_get(ptr);
}

int SculptToolCapabilities_has_gravity_get(PointerRNA *ptr)
{
	return rna_SculptToolCapabilities_has_gravity_get(ptr);
}

static PointerRNA ImapaintToolCapabilities_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ImapaintToolCapabilities_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ImapaintToolCapabilities_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ImapaintToolCapabilities_rna_properties_get(iter);
}

void ImapaintToolCapabilities_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ImapaintToolCapabilities_rna_properties_get(iter);
}

void ImapaintToolCapabilities_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ImapaintToolCapabilities_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ImapaintToolCapabilities_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ImapaintToolCapabilities_has_accumulate_get(PointerRNA *ptr)
{
	return rna_ImapaintToolCapabilities_has_accumulate_get(ptr);
}

int ImapaintToolCapabilities_has_space_attenuation_get(PointerRNA *ptr)
{
	return rna_ImapaintToolCapabilities_has_space_attenuation_get(ptr);
}

int ImapaintToolCapabilities_has_radius_get(PointerRNA *ptr)
{
	return rna_ImapaintToolCapabilities_has_radius_get(ptr);
}

float BrushTextureSlot_angle_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->rot);
}

void BrushTextureSlot_angle_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->rot = CLAMPIS(value, 0.0f, 6.2831854820f);
}

int BrushTextureSlot_map_mode_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->brush_map_mode);
}

void BrushTextureSlot_map_mode_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->brush_map_mode = value;
}

int BrushTextureSlot_tex_paint_map_mode_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->brush_map_mode);
}

void BrushTextureSlot_tex_paint_map_mode_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->brush_map_mode = value;
}

int BrushTextureSlot_mask_map_mode_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->brush_map_mode);
}

void BrushTextureSlot_mask_map_mode_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->brush_map_mode = value;
}







/* Brush */
static EnumPropertyItem rna_Brush_blend_items[25] = {
	{0, "MIX", 0, "Mix", "Use mix blending mode while painting"},
	{1, "ADD", 0, "Add", "Use add blending mode while painting"},
	{2, "SUB", 0, "Subtract", "Use subtract blending mode while painting"},
	{3, "MUL", 0, "Multiply", "Use multiply blending mode while painting"},
	{4, "LIGHTEN", 0, "Lighten", "Use lighten blending mode while painting"},
	{5, "DARKEN", 0, "Darken", "Use darken blending mode while painting"},
	{6, "ERASE_ALPHA", 0, "Erase Alpha", "Erase alpha while painting"},
	{7, "ADD_ALPHA", 0, "Add Alpha", "Add alpha while painting"},
	{8, "OVERLAY", 0, "Overlay", "Use overlay blending mode while painting"},
	{9, "HARDLIGHT", 0, "Hard light", "Use hard light blending mode while painting"},
	{10, "COLORBURN", 0, "Color burn", "Use color burn blending mode while painting"},
	{11, "LINEARBURN", 0, "Linear burn", "Use linear burn blending mode while painting"},
	{12, "COLORDODGE", 0, "Color dodge", "Use color dodge blending mode while painting"},
	{13, "SCREEN", 0, "Screen", "Use screen blending mode while painting"},
	{14, "SOFTLIGHT", 0, "Soft light", "Use softlight blending mode while painting"},
	{15, "PINLIGHT", 0, "Pin light", "Use pinlight blending mode while painting"},
	{16, "VIVIDLIGHT", 0, "Vivid light", "Use vividlight blending mode while painting"},
	{17, "LINEARLIGHT", 0, "Linear light", "Use linearlight blending mode while painting"},
	{18, "DIFFERENCE", 0, "Difference", "Use difference blending mode while painting"},
	{19, "EXCLUSION", 0, "Exclusion", "Use exclusion blending mode while painting"},
	{20, "HUE", 0, "Hue", "Use hue blending mode while painting"},
	{21, "SATURATION", 0, "Saturation", "Use saturation blending mode while painting"},
	{22, "LUMINOSITY", 0, "Luminosity", "Use luminosity blending mode while painting"},
	{23, "COLOR", 0, "Color", "Use color blending mode while painting"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_blend = {
	{(PropertyRNA *)&rna_Brush_sculpt_tool, NULL,
	-1, "blend", 3, "Blending mode",
	"Brush blending mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_blend_get, Brush_blend_set, NULL, NULL, NULL, NULL, rna_Brush_blend_items, 24, 0
};

static EnumPropertyItem rna_Brush_sculpt_tool_items[20] = {
	{17, "BLOB", 781, "Blob", ""},
	{8, "CLAY", 783, "Clay", ""},
	{18, "CLAY_STRIPS", 784, "Clay Strips", ""},
	{16, "CREASE", 786, "Crease", ""},
	{1, "DRAW", 800, "Draw", ""},
	{9, "FILL", 788, "Fill", ""},
	{7, "FLATTEN", 789, "Flatten", ""},
	{5, "GRAB", 790, "Grab", ""},
	{4, "INFLATE", 791, "Inflate", ""},
	{6, "LAYER", 792, "Layer", ""},
	{19, "MASK", 794, "Mask", ""},
	{11, "NUDGE", 797, "Nudge", ""},
	{3, "PINCH", 798, "Pinch", ""},
	{14, "ROTATE", 810, "Rotate", ""},
	{10, "SCRAPE", 799, "Scrape", ""},
	{15, "SIMPLIFY", 805, "Simplify", ""},
	{2, "SMOOTH", 802, "Smooth", ""},
	{13, "SNAKE_HOOK", 803, "Snake Hook", ""},
	{12, "THUMB", 809, "Thumb", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_sculpt_tool = {
	{(PropertyRNA *)&rna_Brush_vertex_tool, (PropertyRNA *)&rna_Brush_blend,
	-1, "sculpt_tool", 3, "Sculpt Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_sculpt_tool_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_sculpt_tool_get, Brush_sculpt_tool_set, NULL, NULL, NULL, NULL, rna_Brush_sculpt_tool_items, 19, 17
};

static EnumPropertyItem rna_Brush_vertex_tool_items[8] = {
	{0, "MIX", 795, "Mix", "Use mix blending mode while painting"},
	{1, "ADD", 780, "Add", "Use add blending mode while painting"},
	{2, "SUB", 805, "Subtract", "Use subtract blending mode while painting"},
	{3, "MUL", 796, "Multiply", "Use multiply blending mode while painting"},
	{4, "BLUR", 782, "Blur", "Blur the color with surrounding values"},
	{5, "LIGHTEN", 793, "Lighten", "Use lighten blending mode while painting"},
	{6, "DARKEN", 787, "Darken", "Use darken blending mode while painting"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_vertex_tool = {
	{(PropertyRNA *)&rna_Brush_image_tool, (PropertyRNA *)&rna_Brush_sculpt_tool,
	-1, "vertex_tool", 3, "Blending mode",
	"Brush blending mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_vertex_tool_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_vertex_tool_get, Brush_vertex_tool_set, NULL, NULL, NULL, NULL, rna_Brush_vertex_tool_items, 7, 0
};

static EnumPropertyItem rna_Brush_image_tool_items[7] = {
	{0, "DRAW", 806, "Draw", ""},
	{1, "SOFTEN", 804, "Soften", ""},
	{2, "SMEAR", 801, "Smear", ""},
	{3, "CLONE", 785, "Clone", ""},
	{4, "FILL", 807, "Fill", ""},
	{5, "MASK", 808, "Mask", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_image_tool = {
	{(PropertyRNA *)&rna_Brush_direction, (PropertyRNA *)&rna_Brush_vertex_tool,
	-1, "image_tool", 3, "Image Paint Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_imagepaint_tool_update, 251920384, NULL, NULL,
	0, -1, NULL},
	Brush_image_tool_get, Brush_image_tool_set, NULL, NULL, NULL, NULL, rna_Brush_image_tool_items, 6, 0
};

static EnumPropertyItem rna_Brush_direction_items[3] = {
	{0, "ADD", 0, "Add", "Add effect of brush"},
	{512, "SUBTRACT", 0, "Subtract", "Subtract effect of brush"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_direction = {
	{(PropertyRNA *)&rna_Brush_stroke_method, (PropertyRNA *)&rna_Brush_image_tool,
	-1, "direction", 3, "Direction",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_direction_get, Brush_direction_set, rna_Brush_direction_itemf, NULL, NULL, NULL, rna_Brush_direction_items, 2, 0
};

static EnumPropertyItem rna_Brush_stroke_method_items[8] = {
	{0, "DOTS", 0, "Dots", "Apply paint on each mouse move step"},
	{8388608, "DRAG_DOT", 0, "Drag Dot", "Allows a single dot to be carefully positioned"},
	{1024, "SPACE", 0, "Space", "Limit brush application to the distance specified by spacing"},
	{1, "AIRBRUSH", 0, "Airbrush", "Keep applying paint effect while holding mouse (spray)"},
	{256, "ANCHORED", 0, "Anchored", "Keep the brush anchored to the initial location"},
	{536870912, "LINE", 0, "Line", "Draw a line with dabs separated according to spacing"},
	{-2147483648, "CURVE", 0, "Curve", "Define the stroke curve with a bezier curve (dabs are separated according to spacing)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_stroke_method = {
	{(PropertyRNA *)&rna_Brush_texture_angle_source_random, (PropertyRNA *)&rna_Brush_direction,
	-1, "stroke_method", 3, "Stroke Method",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_stroke_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_stroke_method_get, Brush_stroke_method_set, rna_Brush_stroke_itemf, NULL, NULL, NULL, rna_Brush_stroke_method_items, 7, 0
};

static EnumPropertyItem rna_Brush_texture_angle_source_random_items[4] = {
	{0, "USER", 0, "User", "Rotate the brush texture by given angle"},
	{128, "RAKE", 0, "Rake", "Rotate the brush texture to match the stroke direction"},
	{33554432, "RANDOM", 0, "Random", "Rotate the brush texture at random"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_texture_angle_source_random = {
	{(PropertyRNA *)&rna_Brush_texture_angle_source_no_random, (PropertyRNA *)&rna_Brush_stroke_method,
	-1, "texture_angle_source_random", 3, "Texture Angle Source",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_texture_angle_source_random_get, Brush_texture_angle_source_random_set, NULL, NULL, NULL, NULL, rna_Brush_texture_angle_source_random_items, 3, 0
};

static EnumPropertyItem rna_Brush_texture_angle_source_no_random_items[3] = {
	{0, "USER", 0, "User", "Rotate the brush texture by given angle"},
	{128, "RAKE", 0, "Rake", "Rotate the brush texture to match the stroke direction"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_texture_angle_source_no_random = {
	{(PropertyRNA *)&rna_Brush_sculpt_plane, (PropertyRNA *)&rna_Brush_texture_angle_source_random,
	-1, "texture_angle_source_no_random", 3, "Texture Angle Source",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_texture_angle_source_no_random_get, Brush_texture_angle_source_no_random_set, NULL, NULL, NULL, NULL, rna_Brush_texture_angle_source_no_random_items, 2, 0
};

static EnumPropertyItem rna_Brush_sculpt_plane_items[6] = {
	{0, "AREA", 0, "Area Plane", ""},
	{1, "VIEW", 0, "View Plane", ""},
	{2, "X", 0, "X Plane", ""},
	{3, "Y", 0, "Y Plane", ""},
	{4, "Z", 0, "Z Plane", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_sculpt_plane = {
	{(PropertyRNA *)&rna_Brush_mask_tool, (PropertyRNA *)&rna_Brush_texture_angle_source_no_random,
	-1, "sculpt_plane", 3, "Sculpt Plane",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_sculpt_plane_get, Brush_sculpt_plane_set, NULL, NULL, NULL, NULL, rna_Brush_sculpt_plane_items, 5, 0
};

static EnumPropertyItem rna_Brush_mask_tool_items[3] = {
	{0, "DRAW", 0, "Draw", ""},
	{1, "SMOOTH", 0, "Smooth", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_mask_tool = {
	{(PropertyRNA *)&rna_Brush_size, (PropertyRNA *)&rna_Brush_sculpt_plane,
	-1, "mask_tool", 3, "Mask Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_mask_tool_get, Brush_mask_tool_set, NULL, NULL, NULL, NULL, rna_Brush_mask_tool_items, 2, 0
};

IntPropertyRNA rna_Brush_size = {
	{(PropertyRNA *)&rna_Brush_unprojected_radius, (PropertyRNA *)&rna_Brush_mask_tool,
	-1, "size", 3, "Radius",
	"Radius of the brush in pixels",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_size_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_size_get, Brush_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 200, 1, 2000, 1, 0, NULL
};

FloatPropertyRNA rna_Brush_unprojected_radius = {
	{(PropertyRNA *)&rna_Brush_jitter, (PropertyRNA *)&rna_Brush_size,
	-1, "unprojected_radius", 3, "Unprojected Radius",
	"Radius of brush in Blender units",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_size_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_unprojected_radius_get, Brush_unprojected_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, FLT_MAX, 0.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_jitter = {
	{(PropertyRNA *)&rna_Brush_jitter_absolute, (PropertyRNA *)&rna_Brush_unprojected_radius,
	-1, "jitter", 8195, "Jitter",
	"Jitter the position of the brush while painting",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, jitter), 4, NULL},
	Brush_jitter_get, Brush_jitter_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 1000.0f, 0.1000000015f, 4, 0.0f, NULL
};

IntPropertyRNA rna_Brush_jitter_absolute = {
	{(PropertyRNA *)&rna_Brush_spacing, (PropertyRNA *)&rna_Brush_jitter,
	-1, "jitter_absolute", 8195, "Jitter",
	"Jitter the position of the brush in pixels while painting",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, jitter_absolute), 0, NULL},
	Brush_jitter_absolute_get, Brush_jitter_absolute_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000000, 0, 1000000, 1, 0, NULL
};

IntPropertyRNA rna_Brush_spacing = {
	{(PropertyRNA *)&rna_Brush_grad_spacing, (PropertyRNA *)&rna_Brush_jitter_absolute,
	-1, "spacing", 8195, "Spacing",
	"Spacing between brush daubs as a percentage of brush diameter",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, spacing), 0, NULL},
	Brush_spacing_get, Brush_spacing_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 500, 1, 1000, 5, 0, NULL
};

IntPropertyRNA rna_Brush_grad_spacing = {
	{(PropertyRNA *)&rna_Brush_smooth_stroke_radius, (PropertyRNA *)&rna_Brush_spacing,
	-1, "grad_spacing", 8195, "Gradient Spacing",
	"Spacing before brush gradient goes full circle",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, gradient_spacing), 0, NULL},
	Brush_grad_spacing_get, Brush_grad_spacing_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10000, 1, 10000, 5, 0, NULL
};

IntPropertyRNA rna_Brush_smooth_stroke_radius = {
	{(PropertyRNA *)&rna_Brush_smooth_stroke_factor, (PropertyRNA *)&rna_Brush_grad_spacing,
	-1, "smooth_stroke_radius", 8195, "Smooth Stroke Radius",
	"Minimum distance from last point before stroke continues",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, smooth_stroke_radius), 0, NULL},
	Brush_smooth_stroke_radius_get, Brush_smooth_stroke_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	10, 200, 10, 200, 1, 0, NULL
};

FloatPropertyRNA rna_Brush_smooth_stroke_factor = {
	{(PropertyRNA *)&rna_Brush_rate, (PropertyRNA *)&rna_Brush_smooth_stroke_radius,
	-1, "smooth_stroke_factor", 8195, "Smooth Stroke Factor",
	"Higher values give a smoother stroke",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, smooth_stroke_factor), 4, NULL},
	Brush_smooth_stroke_factor_get, Brush_smooth_stroke_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.5000000000f, 0.9900000095f, 0.5000000000f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_rate = {
	{(PropertyRNA *)&rna_Brush_color, (PropertyRNA *)&rna_Brush_smooth_stroke_factor,
	-1, "rate", 8195, "Rate",
	"Interval between paints for Airbrush",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, rate), 4, NULL},
	Brush_rate_get, Brush_rate_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 1.0f, 0.0001000000f, 10000.0f, 1.0f, 3, 0.0f, NULL
};

static float rna_Brush_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_color = {
	{(PropertyRNA *)&rna_Brush_secondary_color, (PropertyRNA *)&rna_Brush_rate,
	-1, "color", 8195, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, rgb), 4, NULL},
	NULL, NULL, Brush_color_get, Brush_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_Brush_color_default
};

static float rna_Brush_secondary_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_secondary_color = {
	{(PropertyRNA *)&rna_Brush_weight, (PropertyRNA *)&rna_Brush_color,
	-1, "secondary_color", 8195, "Secondary Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, secondary_rgb), 4, NULL},
	NULL, NULL, Brush_secondary_color_get, Brush_secondary_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_Brush_secondary_color_default
};

FloatPropertyRNA rna_Brush_weight = {
	{(PropertyRNA *)&rna_Brush_strength, (PropertyRNA *)&rna_Brush_secondary_color,
	-1, "weight", 8195, "Weight",
	"Vertex weight when brush is applied",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, weight), 4, NULL},
	Brush_weight_get, Brush_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Brush_strength = {
	{(PropertyRNA *)&rna_Brush_plane_offset, (PropertyRNA *)&rna_Brush_weight,
	-1, "strength", 8195, "Strength",
	"How powerful the effect of the brush is when applied",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, alpha), 4, NULL},
	Brush_strength_get, Brush_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Brush_plane_offset = {
	{(PropertyRNA *)&rna_Brush_plane_trim, (PropertyRNA *)&rna_Brush_strength,
	-1, "plane_offset", 8195, "Plane Offset",
	"Adjust plane on which the brush acts towards or away from the object surface",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, plane_offset), 4, NULL},
	Brush_plane_offset_get, Brush_plane_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -0.5000000000f, 0.5000000000f, -2.0f, 2.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_plane_trim = {
	{(PropertyRNA *)&rna_Brush_height, (PropertyRNA *)&rna_Brush_plane_offset,
	-1, "plane_trim", 8195, "Plane Trim",
	"If a vertex is further away from offset plane than this, then it is not affected",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, plane_trim), 4, NULL},
	Brush_plane_trim_get, Brush_plane_trim_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Brush_height = {
	{(PropertyRNA *)&rna_Brush_texture_sample_bias, (PropertyRNA *)&rna_Brush_plane_trim,
	-1, "height", 8195, "Brush Height",
	"Affectable height of brush (layer height for layer tool, i.e.)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, height), 4, NULL},
	Brush_height_get, Brush_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Brush_texture_sample_bias = {
	{(PropertyRNA *)&rna_Brush_normal_weight, (PropertyRNA *)&rna_Brush_height,
	-1, "texture_sample_bias", 8195, "Texture Sample Bias",
	"Value added to texture samples",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, texture_sample_bias), 4, NULL},
	Brush_texture_sample_bias_get, Brush_texture_sample_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_normal_weight = {
	{(PropertyRNA *)&rna_Brush_crease_pinch_factor, (PropertyRNA *)&rna_Brush_texture_sample_bias,
	-1, "normal_weight", 8195, "Normal Weight",
	"How much grab will pull vertexes out of surface during a grab",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, normal_weight), 4, NULL},
	Brush_normal_weight_get, Brush_normal_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_crease_pinch_factor = {
	{(PropertyRNA *)&rna_Brush_auto_smooth_factor, (PropertyRNA *)&rna_Brush_normal_weight,
	-1, "crease_pinch_factor", 8195, "Crease Brush Pinch Factor",
	"How much the crease brush pinches",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, crease_pinch_factor), 4, NULL},
	Brush_crease_pinch_factor_get, Brush_crease_pinch_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.6666666865f, NULL
};

FloatPropertyRNA rna_Brush_auto_smooth_factor = {
	{(PropertyRNA *)&rna_Brush_stencil_pos, (PropertyRNA *)&rna_Brush_crease_pinch_factor,
	-1, "auto_smooth_factor", 8195, "Autosmooth",
	"Amount of smoothing to automatically apply to each stroke",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, autosmooth_factor), 4, NULL},
	Brush_auto_smooth_factor_get, Brush_auto_smooth_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

static float rna_Brush_stencil_pos_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_stencil_pos = {
	{(PropertyRNA *)&rna_Brush_stencil_dimension, (PropertyRNA *)&rna_Brush_auto_smooth_factor,
	-1, "stencil_pos", 8195, "Stencil Position",
	"Position of stencil in viewport",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, stencil_pos), 4, NULL},
	NULL, NULL, Brush_stencil_pos_get, Brush_stencil_pos_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_stencil_pos_default
};

static float rna_Brush_stencil_dimension_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_stencil_dimension = {
	{(PropertyRNA *)&rna_Brush_mask_stencil_pos, (PropertyRNA *)&rna_Brush_stencil_pos,
	-1, "stencil_dimension", 8195, "Stencil Dimensions",
	"Dimensions of stencil in viewport",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, stencil_dimension), 4, NULL},
	NULL, NULL, Brush_stencil_dimension_get, Brush_stencil_dimension_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_stencil_dimension_default
};

static float rna_Brush_mask_stencil_pos_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_mask_stencil_pos = {
	{(PropertyRNA *)&rna_Brush_mask_stencil_dimension, (PropertyRNA *)&rna_Brush_stencil_dimension,
	-1, "mask_stencil_pos", 8195, "Mask Stencil Position",
	"Position of mask stencil in viewport",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, mask_stencil_pos), 4, NULL},
	NULL, NULL, Brush_mask_stencil_pos_get, Brush_mask_stencil_pos_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_mask_stencil_pos_default
};

static float rna_Brush_mask_stencil_dimension_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_mask_stencil_dimension = {
	{(PropertyRNA *)&rna_Brush_sharp_threshold, (PropertyRNA *)&rna_Brush_mask_stencil_pos,
	-1, "mask_stencil_dimension", 8195, "Mask Stencil Dimensions",
	"Dimensions of mask stencil in viewport",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, mask_stencil_dimension), 4, NULL},
	NULL, NULL, Brush_mask_stencil_dimension_get, Brush_mask_stencil_dimension_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_mask_stencil_dimension_default
};

FloatPropertyRNA rna_Brush_sharp_threshold = {
	{(PropertyRNA *)&rna_Brush_fill_threshold, (PropertyRNA *)&rna_Brush_mask_stencil_dimension,
	-1, "sharp_threshold", 8195, "Sharp Threshold",
	"Threshold below which, no sharpening is done",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, sharp_threshold), 4, NULL},
	Brush_sharp_threshold_get, Brush_sharp_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_fill_threshold = {
	{(PropertyRNA *)&rna_Brush_blur_kernel_radius, (PropertyRNA *)&rna_Brush_sharp_threshold,
	-1, "fill_threshold", 8195, "Fill Threshold",
	"Threshold above which filling is not propagated",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, fill_threshold), 4, NULL},
	Brush_fill_threshold_get, Brush_fill_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Brush_blur_kernel_radius = {
	{(PropertyRNA *)&rna_Brush_blur_mode, (PropertyRNA *)&rna_Brush_fill_threshold,
	-1, "blur_kernel_radius", 8195, "Kernel Radius",
	"Radius of kernel used for soften and sharpen in pixels",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, blur_kernel_radius), 0, NULL},
	Brush_blur_kernel_radius_get, Brush_blur_kernel_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 50, 1, 10000, 1, 0, NULL
};

static EnumPropertyItem rna_Brush_blur_mode_items[3] = {
	{1, "BOX", 0, "Box", ""},
	{0, "GAUSSIAN", 0, "Gaussian", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_blur_mode = {
	{(PropertyRNA *)&rna_Brush_use_airbrush, (PropertyRNA *)&rna_Brush_blur_kernel_radius,
	-1, "blur_mode", 3, "Blur Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_blur_mode_get, Brush_blur_mode_set, NULL, NULL, NULL, NULL, rna_Brush_blur_mode_items, 2, 0
};

BoolPropertyRNA rna_Brush_use_airbrush = {
	{(PropertyRNA *)&rna_Brush_use_original_normal, (PropertyRNA *)&rna_Brush_blur_mode,
	-1, "use_airbrush", 3, "Airbrush",
	"Keep applying paint effect while holding mouse (spray)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_airbrush_get, Brush_use_airbrush_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_original_normal = {
	{(PropertyRNA *)&rna_Brush_use_wrap, (PropertyRNA *)&rna_Brush_use_airbrush,
	-1, "use_original_normal", 4099, "Original Normal",
	"When locked keep using normal of surface where stroke was initiated",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_original_normal_get, Brush_use_original_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_wrap = {
	{(PropertyRNA *)&rna_Brush_use_pressure_strength, (PropertyRNA *)&rna_Brush_use_original_normal,
	-1, "use_wrap", 3, "Wrap",
	"Enable torus wrapping while painting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_wrap_get, Brush_use_wrap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pressure_strength = {
	{(PropertyRNA *)&rna_Brush_use_offset_pressure, (PropertyRNA *)&rna_Brush_use_wrap,
	-1, "use_pressure_strength", 3, "Strength Pressure",
	"Enable tablet pressure sensitivity for strength",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_pressure_strength_get, Brush_use_pressure_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_offset_pressure = {
	{(PropertyRNA *)&rna_Brush_use_pressure_size, (PropertyRNA *)&rna_Brush_use_pressure_strength,
	-1, "use_offset_pressure", 3, "Plane Offset Pressure",
	"Enable tablet pressure sensitivity for offset",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_offset_pressure_get, Brush_use_offset_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pressure_size = {
	{(PropertyRNA *)&rna_Brush_use_gradient, (PropertyRNA *)&rna_Brush_use_offset_pressure,
	-1, "use_pressure_size", 3, "Size Pressure",
	"Enable tablet pressure sensitivity for size",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_pressure_size_get, Brush_use_pressure_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_gradient = {
	{(PropertyRNA *)&rna_Brush_use_pressure_jitter, (PropertyRNA *)&rna_Brush_use_pressure_size,
	-1, "use_gradient", 3, "Use Gradient",
	"Use Gradient by utilizing a sampling method",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_gradient_get, Brush_use_gradient_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pressure_jitter = {
	{(PropertyRNA *)&rna_Brush_use_pressure_spacing, (PropertyRNA *)&rna_Brush_use_gradient,
	-1, "use_pressure_jitter", 3, "Jitter Pressure",
	"Enable tablet pressure sensitivity for jitter",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_pressure_jitter_get, Brush_use_pressure_jitter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pressure_spacing = {
	{(PropertyRNA *)&rna_Brush_use_pressure_masking, (PropertyRNA *)&rna_Brush_use_pressure_jitter,
	-1, "use_pressure_spacing", 3, "Spacing Pressure",
	"Enable tablet pressure sensitivity for spacing",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_pressure_spacing_get, Brush_use_pressure_spacing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Brush_use_pressure_masking_items[4] = {
	{0, "NONE", 0, "Off", ""},
	{2, "RAMP", 67, "Ramp", ""},
	{4, "CUTOFF", 67, "Cutoff", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_use_pressure_masking = {
	{(PropertyRNA *)&rna_Brush_use_inverse_smooth_pressure, (PropertyRNA *)&rna_Brush_use_pressure_spacing,
	-1, "use_pressure_masking", 3, "Mask Pressure Mode",
	"Pen pressure makes texture influence smaller",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_pressure_masking_get, Brush_use_pressure_masking_set, NULL, NULL, NULL, NULL, rna_Brush_use_pressure_masking_items, 3, 0
};

BoolPropertyRNA rna_Brush_use_inverse_smooth_pressure = {
	{(PropertyRNA *)&rna_Brush_use_rake, (PropertyRNA *)&rna_Brush_use_pressure_masking,
	-1, "use_inverse_smooth_pressure", 3, "Inverse Smooth Pressure",
	"Lighter pressure causes more smoothing to be applied",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_inverse_smooth_pressure_get, Brush_use_inverse_smooth_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_rake = {
	{(PropertyRNA *)&rna_Brush_use_relative_jitter, (PropertyRNA *)&rna_Brush_use_inverse_smooth_pressure,
	-1, "use_rake", 3, "Rake",
	"Rotate the brush texture to match the stroke direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_rake_get, Brush_use_rake_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_relative_jitter = {
	{(PropertyRNA *)&rna_Brush_use_random_rotation, (PropertyRNA *)&rna_Brush_use_rake,
	-1, "use_relative_jitter", 4099, "Absolute Jitter",
	"Jittering happens in screen space, not relative to brush size",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_relative_jitter_get, Brush_use_relative_jitter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_random_rotation = {
	{(PropertyRNA *)&rna_Brush_use_plane_trim, (PropertyRNA *)&rna_Brush_use_relative_jitter,
	-1, "use_random_rotation", 3, "Random Rotation",
	"Rotate the brush texture at random",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_random_rotation_get, Brush_use_random_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_plane_trim = {
	{(PropertyRNA *)&rna_Brush_use_frontface, (PropertyRNA *)&rna_Brush_use_random_rotation,
	-1, "use_plane_trim", 3, "Use Plane Trim",
	"Enable Plane Trim",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_plane_trim_get, Brush_use_plane_trim_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_frontface = {
	{(PropertyRNA *)&rna_Brush_use_anchor, (PropertyRNA *)&rna_Brush_use_plane_trim,
	-1, "use_frontface", 3, "Use Front-Face",
	"Brush only affects vertexes that face the viewer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_frontface_get, Brush_use_frontface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_anchor = {
	{(PropertyRNA *)&rna_Brush_use_space, (PropertyRNA *)&rna_Brush_use_frontface,
	-1, "use_anchor", 3, "Anchored",
	"Keep the brush anchored to the initial location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_anchor_get, Brush_use_anchor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_space = {
	{(PropertyRNA *)&rna_Brush_use_line, (PropertyRNA *)&rna_Brush_use_anchor,
	-1, "use_space", 3, "Space",
	"Limit brush application to the distance specified by spacing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_space_get, Brush_use_space_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_line = {
	{(PropertyRNA *)&rna_Brush_use_curve, (PropertyRNA *)&rna_Brush_use_space,
	-1, "use_line", 3, "Line",
	"Draw a line with dabs separated according to spacing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_line_get, Brush_use_line_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_curve = {
	{(PropertyRNA *)&rna_Brush_use_smooth_stroke, (PropertyRNA *)&rna_Brush_use_line,
	-1, "use_curve", 3, "Curve",
	"Define the stroke curve with a bezier curve. Dabs are separated according to spacing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_curve_get, Brush_use_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_smooth_stroke = {
	{(PropertyRNA *)&rna_Brush_use_persistent, (PropertyRNA *)&rna_Brush_use_curve,
	-1, "use_smooth_stroke", 3, "Smooth Stroke",
	"Brush lags behind mouse and follows a smoother path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_smooth_stroke_get, Brush_use_smooth_stroke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_persistent = {
	{(PropertyRNA *)&rna_Brush_use_accumulate, (PropertyRNA *)&rna_Brush_use_smooth_stroke,
	-1, "use_persistent", 3, "Persistent",
	"Sculpt on a persistent layer of the mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_persistent_get, Brush_use_persistent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_accumulate = {
	{(PropertyRNA *)&rna_Brush_use_space_attenuation, (PropertyRNA *)&rna_Brush_use_persistent,
	-1, "use_accumulate", 3, "Accumulate",
	"Accumulate stroke daubs on top of each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_accumulate_get, Brush_use_accumulate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_space_attenuation = {
	{(PropertyRNA *)&rna_Brush_use_adaptive_space, (PropertyRNA *)&rna_Brush_use_accumulate,
	-1, "use_space_attenuation", 4099, "Use Automatic Strength Adjustment",
	"Automatically adjust strength to give consistent results for different spacings",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_space_attenuation_get, Brush_use_space_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_adaptive_space = {
	{(PropertyRNA *)&rna_Brush_use_locked_size, (PropertyRNA *)&rna_Brush_use_space_attenuation,
	-1, "use_adaptive_space", 3, "Adaptive Spacing",
	"Space daubs according to surface orientation instead of screen space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_adaptive_space_get, Brush_use_adaptive_space_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_locked_size = {
	{(PropertyRNA *)&rna_Brush_use_edge_to_edge, (PropertyRNA *)&rna_Brush_use_adaptive_space,
	-1, "use_locked_size", 3, "Use Blender Units",
	"When locked brush stays same size relative to object; when unlocked brush size is given in pixels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_locked_size_get, Brush_use_locked_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_edge_to_edge = {
	{(PropertyRNA *)&rna_Brush_use_restore_mesh, (PropertyRNA *)&rna_Brush_use_locked_size,
	-1, "use_edge_to_edge", 3, "Edge-to-edge",
	"Drag anchor brush from edge-to-edge",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_edge_to_edge_get, Brush_use_edge_to_edge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_restore_mesh = {
	{(PropertyRNA *)&rna_Brush_use_alpha, (PropertyRNA *)&rna_Brush_use_edge_to_edge,
	-1, "use_restore_mesh", 3, "Restore Mesh",
	"Allow a single dot to be carefully positioned",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_restore_mesh_get, Brush_use_restore_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_alpha = {
	{(PropertyRNA *)&rna_Brush_curve, (PropertyRNA *)&rna_Brush_use_restore_mesh,
	-1, "use_alpha", 3, "Alpha",
	"When this is disabled, lock alpha while painting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_alpha_get, Brush_use_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Brush_curve = {
	{(PropertyRNA *)&rna_Brush_paint_curve, (PropertyRNA *)&rna_Brush_use_alpha,
	-1, "curve", 8650752, "Curve",
	"Editable falloff curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_Brush_paint_curve = {
	{(PropertyRNA *)&rna_Brush_gradient, (PropertyRNA *)&rna_Brush_curve,
	-1, "paint_curve", 8388673, "Paint Curve",
	"Active Paint Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_paint_curve_get, Brush_paint_curve_set, NULL, NULL,&RNA_PaintCurve
};

PointerPropertyRNA rna_Brush_gradient = {
	{(PropertyRNA *)&rna_Brush_gradient_stroke_mode, (PropertyRNA *)&rna_Brush_paint_curve,
	-1, "gradient", 8388608, "Gradient",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_gradient_get, NULL, NULL, NULL,&RNA_ColorRamp
};

static EnumPropertyItem rna_Brush_gradient_stroke_mode_items[4] = {
	{0, "PRESSURE", 0, "Pressure", ""},
	{1, "SPACING_REPEAT", 0, "Repeat", ""},
	{2, "SPACING_CLAMP", 0, "Clamp", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_gradient_stroke_mode = {
	{(PropertyRNA *)&rna_Brush_gradient_fill_mode, (PropertyRNA *)&rna_Brush_gradient,
	-1, "gradient_stroke_mode", 3, "Gradient Stroke Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_gradient_stroke_mode_get, Brush_gradient_stroke_mode_set, NULL, NULL, NULL, NULL, rna_Brush_gradient_stroke_mode_items, 3, 0
};

static EnumPropertyItem rna_Brush_gradient_fill_mode_items[3] = {
	{0, "LINEAR", 0, "Linear", ""},
	{1, "RADIAL", 0, "Radial", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_gradient_fill_mode = {
	{(PropertyRNA *)&rna_Brush_use_primary_overlay, (PropertyRNA *)&rna_Brush_gradient_stroke_mode,
	-1, "gradient_fill_mode", 3, "Gradient Fill Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_gradient_fill_mode_get, Brush_gradient_fill_mode_set, NULL, NULL, NULL, NULL, rna_Brush_gradient_fill_mode_items, 2, 0
};

BoolPropertyRNA rna_Brush_use_primary_overlay = {
	{(PropertyRNA *)&rna_Brush_use_secondary_overlay, (PropertyRNA *)&rna_Brush_gradient_fill_mode,
	-1, "use_primary_overlay", 3, "Use Texture Overlay",
	"Show texture in viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_primary_overlay_get, Brush_use_primary_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_secondary_overlay = {
	{(PropertyRNA *)&rna_Brush_use_cursor_overlay, (PropertyRNA *)&rna_Brush_use_primary_overlay,
	-1, "use_secondary_overlay", 3, "Use Texture Overlay",
	"Show texture in viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_secondary_overlay_get, Brush_use_secondary_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_cursor_overlay = {
	{(PropertyRNA *)&rna_Brush_use_cursor_overlay_override, (PropertyRNA *)&rna_Brush_use_secondary_overlay,
	-1, "use_cursor_overlay", 3, "Use Cursor Overlay",
	"Show cursor in viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_cursor_overlay_get, Brush_use_cursor_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_cursor_overlay_override = {
	{(PropertyRNA *)&rna_Brush_use_primary_overlay_override, (PropertyRNA *)&rna_Brush_use_cursor_overlay,
	-1, "use_cursor_overlay_override", 3, "Override Overlay",
	"Don\'t show overlay during a stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_cursor_overlay_override_get, Brush_use_cursor_overlay_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_primary_overlay_override = {
	{(PropertyRNA *)&rna_Brush_use_secondary_overlay_override, (PropertyRNA *)&rna_Brush_use_cursor_overlay_override,
	-1, "use_primary_overlay_override", 3, "Override Overlay",
	"Don\'t show overlay during a stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_primary_overlay_override_get, Brush_use_primary_overlay_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_secondary_overlay_override = {
	{(PropertyRNA *)&rna_Brush_use_paint_sculpt, (PropertyRNA *)&rna_Brush_use_primary_overlay_override,
	-1, "use_secondary_overlay_override", 3, "Override Overlay",
	"Don\'t show overlay during a stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_secondary_overlay_override_get, Brush_use_secondary_overlay_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_paint_sculpt = {
	{(PropertyRNA *)&rna_Brush_use_paint_vertex, (PropertyRNA *)&rna_Brush_use_secondary_overlay_override,
	-1, "use_paint_sculpt", 3, "Use Sculpt",
	"Use this brush in sculpt mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_paint_sculpt_get, Brush_use_paint_sculpt_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_paint_vertex = {
	{(PropertyRNA *)&rna_Brush_use_paint_weight, (PropertyRNA *)&rna_Brush_use_paint_sculpt,
	-1, "use_paint_vertex", 3, "Use Vertex",
	"Use this brush in vertex paint mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_paint_vertex_get, Brush_use_paint_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_paint_weight = {
	{(PropertyRNA *)&rna_Brush_use_paint_image, (PropertyRNA *)&rna_Brush_use_paint_vertex,
	-1, "use_paint_weight", 3, "Use Weight",
	"Use this brush in weight paint mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_paint_weight_get, Brush_use_paint_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_paint_image = {
	{(PropertyRNA *)&rna_Brush_texture_slot, (PropertyRNA *)&rna_Brush_use_paint_weight,
	-1, "use_paint_image", 3, "Use Texture",
	"Use this brush in texture paint mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_paint_image_get, Brush_use_paint_image_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Brush_texture_slot = {
	{(PropertyRNA *)&rna_Brush_texture, (PropertyRNA *)&rna_Brush_use_paint_image,
	-1, "texture_slot", 8388608, "Texture Slot",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_texture_slot_get, NULL, NULL, NULL,&RNA_BrushTextureSlot
};

PointerPropertyRNA rna_Brush_texture = {
	{(PropertyRNA *)&rna_Brush_mask_texture_slot, (PropertyRNA *)&rna_Brush_texture_slot,
	-1, "texture", 8388673, "Texture",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_main_tex_update, 117440512, NULL, NULL,
	0, -1, NULL},
	Brush_texture_get, Brush_texture_set, NULL, NULL,&RNA_Texture
};

PointerPropertyRNA rna_Brush_mask_texture_slot = {
	{(PropertyRNA *)&rna_Brush_mask_texture, (PropertyRNA *)&rna_Brush_texture,
	-1, "mask_texture_slot", 8388608, "Mask Texture Slot",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_mask_texture_slot_get, NULL, NULL, NULL,&RNA_BrushTextureSlot
};

PointerPropertyRNA rna_Brush_mask_texture = {
	{(PropertyRNA *)&rna_Brush_texture_overlay_alpha, (PropertyRNA *)&rna_Brush_mask_texture_slot,
	-1, "mask_texture", 8388673, "Mask Texture",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_secondary_tex_update, 117440512, NULL, NULL,
	0, -1, NULL},
	Brush_mask_texture_get, Brush_mask_texture_set, NULL, NULL,&RNA_Texture
};

IntPropertyRNA rna_Brush_texture_overlay_alpha = {
	{(PropertyRNA *)&rna_Brush_mask_overlay_alpha, (PropertyRNA *)&rna_Brush_mask_texture,
	-1, "texture_overlay_alpha", 8195, "Texture Overlay Alpha",
	"",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, texture_overlay_alpha), 0, NULL},
	Brush_texture_overlay_alpha_get, Brush_texture_overlay_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

IntPropertyRNA rna_Brush_mask_overlay_alpha = {
	{(PropertyRNA *)&rna_Brush_cursor_overlay_alpha, (PropertyRNA *)&rna_Brush_texture_overlay_alpha,
	-1, "mask_overlay_alpha", 8195, "Mask Texture Overlay Alpha",
	"",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, mask_overlay_alpha), 0, NULL},
	Brush_mask_overlay_alpha_get, Brush_mask_overlay_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

IntPropertyRNA rna_Brush_cursor_overlay_alpha = {
	{(PropertyRNA *)&rna_Brush_cursor_color_add, (PropertyRNA *)&rna_Brush_mask_overlay_alpha,
	-1, "cursor_overlay_alpha", 8195, "Mask Texture Overlay Alpha",
	"",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, cursor_overlay_alpha), 0, NULL},
	Brush_cursor_overlay_alpha_get, Brush_cursor_overlay_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

static float rna_Brush_cursor_color_add_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_cursor_color_add = {
	{(PropertyRNA *)&rna_Brush_cursor_color_subtract, (PropertyRNA *)&rna_Brush_cursor_overlay_alpha,
	-1, "cursor_color_add", 8195, "Add Color",
	"Color of cursor when adding",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, add_col), 4, NULL},
	NULL, NULL, Brush_cursor_color_add_get, Brush_cursor_color_add_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_cursor_color_add_default
};

static float rna_Brush_cursor_color_subtract_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_cursor_color_subtract = {
	{(PropertyRNA *)&rna_Brush_use_custom_icon, (PropertyRNA *)&rna_Brush_cursor_color_add,
	-1, "cursor_color_subtract", 8195, "Subtract Color",
	"Color of cursor when subtracting",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, sub_col), 4, NULL},
	NULL, NULL, Brush_cursor_color_subtract_get, Brush_cursor_color_subtract_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_cursor_color_subtract_default
};

BoolPropertyRNA rna_Brush_use_custom_icon = {
	{(PropertyRNA *)&rna_Brush_icon_filepath, (PropertyRNA *)&rna_Brush_cursor_color_subtract,
	-1, "use_custom_icon", 3, "Custom Icon",
	"Set the brush icon from an image file",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_icon_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_custom_icon_get, Brush_use_custom_icon_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_Brush_icon_filepath = {
	{(PropertyRNA *)&rna_Brush_clone_image, (PropertyRNA *)&rna_Brush_use_custom_icon,
	-1, "icon_filepath", 262145, "Brush Icon Filepath",
	"File path to brush icon",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_Brush_icon_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_icon_filepath_get, Brush_icon_filepath_length, Brush_icon_filepath_set, NULL, NULL, NULL, 1024, ""
};

PointerPropertyRNA rna_Brush_clone_image = {
	{(PropertyRNA *)&rna_Brush_clone_alpha, (PropertyRNA *)&rna_Brush_icon_filepath,
	-1, "clone_image", 8388673, "Clone Image",
	"Image for clone tool",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 251920384, NULL, NULL,
	0, -1, NULL},
	Brush_clone_image_get, Brush_clone_image_set, NULL, NULL,&RNA_Image
};

FloatPropertyRNA rna_Brush_clone_alpha = {
	{(PropertyRNA *)&rna_Brush_clone_offset, (PropertyRNA *)&rna_Brush_clone_image,
	-1, "clone_alpha", 8195, "Clone Alpha",
	"Opacity of clone image display",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 251920384, NULL, NULL,
	offsetof(Brush, clone.alpha), 4, NULL},
	Brush_clone_alpha_get, Brush_clone_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_Brush_clone_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_clone_offset = {
	{(PropertyRNA *)&rna_Brush_brush_capabilities, (PropertyRNA *)&rna_Brush_clone_alpha,
	-1, "clone_offset", 8195, "Clone Offset",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 251920384, NULL, NULL,
	offsetof(Brush, clone.offset), 4, NULL},
	NULL, NULL, Brush_clone_offset_get, Brush_clone_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_clone_offset_default
};

PointerPropertyRNA rna_Brush_brush_capabilities = {
	{(PropertyRNA *)&rna_Brush_sculpt_capabilities, (PropertyRNA *)&rna_Brush_clone_offset,
	-1, "brush_capabilities", 8650752, "Brush Capabilities",
	"Brush\'s capabilities",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_brush_capabilities_get, NULL, NULL, NULL,&RNA_BrushCapabilities
};

PointerPropertyRNA rna_Brush_sculpt_capabilities = {
	{(PropertyRNA *)&rna_Brush_image_paint_capabilities, (PropertyRNA *)&rna_Brush_brush_capabilities,
	-1, "sculpt_capabilities", 8650752, "Sculpt Capabilities",
	"Brush\'s capabilities in sculpt mode",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_sculpt_capabilities_get, NULL, NULL, NULL,&RNA_SculptToolCapabilities
};

PointerPropertyRNA rna_Brush_image_paint_capabilities = {
	{NULL, (PropertyRNA *)&rna_Brush_sculpt_capabilities,
	-1, "image_paint_capabilities", 8650752, "Image Painting Capabilities",
	"Brush\'s capabilities in image paint mode",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_image_paint_capabilities_get, NULL, NULL, NULL,&RNA_ImapaintToolCapabilities
};

StructRNA RNA_Brush = {
	{(ContainerRNA *)&RNA_BrushCapabilities, (ContainerRNA *)&RNA_BoidSettings,
	NULL,
	{(PropertyRNA *)&rna_Brush_blend, (PropertyRNA *)&rna_Brush_image_paint_capabilities}},
	"Brush", NULL, NULL, 7, "Brush",
	"Brush datablock for storing brush settings for painting and sculpting",
	"*", 182,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Brush Capabilities */
CollectionPropertyRNA rna_BrushCapabilities_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilities_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BrushCapabilities_rna_properties_begin, BrushCapabilities_rna_properties_next, BrushCapabilities_rna_properties_end, BrushCapabilities_rna_properties_get, NULL, NULL, BrushCapabilities_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilities_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_overlay, (PropertyRNA *)&rna_BrushCapabilities_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BrushCapabilities_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilities_has_overlay = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_random_texture_angle, (PropertyRNA *)&rna_BrushCapabilities_rna_type,
	-1, "has_overlay", 2, "Has Overlay",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BrushCapabilities_has_overlay_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilities_has_random_texture_angle = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_texture_angle, (PropertyRNA *)&rna_BrushCapabilities_has_overlay,
	-1, "has_random_texture_angle", 2, "Has Random Texture Angle",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BrushCapabilities_has_random_texture_angle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilities_has_texture_angle = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_texture_angle_source, (PropertyRNA *)&rna_BrushCapabilities_has_random_texture_angle,
	-1, "has_texture_angle", 2, "Has Texture Angle",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BrushCapabilities_has_texture_angle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilities_has_texture_angle_source = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_spacing, (PropertyRNA *)&rna_BrushCapabilities_has_texture_angle,
	-1, "has_texture_angle_source", 2, "Has Texture Angle Source",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BrushCapabilities_has_texture_angle_source_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilities_has_spacing = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_smooth_stroke, (PropertyRNA *)&rna_BrushCapabilities_has_texture_angle_source,
	-1, "has_spacing", 2, "Has Spacing",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BrushCapabilities_has_spacing_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilities_has_smooth_stroke = {
	{NULL, (PropertyRNA *)&rna_BrushCapabilities_has_spacing,
	-1, "has_smooth_stroke", 2, "Has Smooth Stroke",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BrushCapabilities_has_smooth_stroke_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BrushCapabilities = {
	{(ContainerRNA *)&RNA_SculptToolCapabilities, (ContainerRNA *)&RNA_Brush,
	NULL,
	{(PropertyRNA *)&rna_BrushCapabilities_rna_properties, (PropertyRNA *)&rna_BrushCapabilities_has_smooth_stroke}},
	"BrushCapabilities", NULL, NULL, 4, "Brush Capabilities",
	"Read-only indications of which brush operations are supported by the current brush",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BrushCapabilities_rna_properties,
	NULL,
	&RNA_Brush,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sculpt Capabilities */
CollectionPropertyRNA rna_SculptToolCapabilities_rna_properties = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_rna_properties_begin, SculptToolCapabilities_rna_properties_next, SculptToolCapabilities_rna_properties_end, SculptToolCapabilities_rna_properties_get, NULL, NULL, SculptToolCapabilities_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SculptToolCapabilities_rna_type = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_accumulate, (PropertyRNA *)&rna_SculptToolCapabilities_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_SculptToolCapabilities_has_accumulate = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_auto_smooth, (PropertyRNA *)&rna_SculptToolCapabilities_rna_type,
	-1, "has_accumulate", 2, "Has Accumulate",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_accumulate_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_auto_smooth = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_height, (PropertyRNA *)&rna_SculptToolCapabilities_has_accumulate,
	-1, "has_auto_smooth", 2, "Has Auto Smooth",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_auto_smooth_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_height = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_jitter, (PropertyRNA *)&rna_SculptToolCapabilities_has_auto_smooth,
	-1, "has_height", 2, "Has Height",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_height_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_jitter = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_normal_weight, (PropertyRNA *)&rna_SculptToolCapabilities_has_height,
	-1, "has_jitter", 2, "Has Jitter",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_jitter_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_normal_weight = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_persistence, (PropertyRNA *)&rna_SculptToolCapabilities_has_jitter,
	-1, "has_normal_weight", 2, "Has Crease/Pinch Factor",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_normal_weight_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_persistence = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_pinch_factor, (PropertyRNA *)&rna_SculptToolCapabilities_has_normal_weight,
	-1, "has_persistence", 2, "Has Persistence",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_persistence_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_pinch_factor = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_plane_offset, (PropertyRNA *)&rna_SculptToolCapabilities_has_persistence,
	-1, "has_pinch_factor", 2, "Has Pinch Factor",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_pinch_factor_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_plane_offset = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_random_texture_angle, (PropertyRNA *)&rna_SculptToolCapabilities_has_pinch_factor,
	-1, "has_plane_offset", 2, "Has Plane Offset",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_plane_offset_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_random_texture_angle = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_sculpt_plane, (PropertyRNA *)&rna_SculptToolCapabilities_has_plane_offset,
	-1, "has_random_texture_angle", 2, "Has Random Texture Angle",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_random_texture_angle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_sculpt_plane = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_secondary_color, (PropertyRNA *)&rna_SculptToolCapabilities_has_random_texture_angle,
	-1, "has_sculpt_plane", 2, "Has Sculpt Plane",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_sculpt_plane_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_secondary_color = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_smooth_stroke, (PropertyRNA *)&rna_SculptToolCapabilities_has_sculpt_plane,
	-1, "has_secondary_color", 2, "Has Secondary Color",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_secondary_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_smooth_stroke = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_space_attenuation, (PropertyRNA *)&rna_SculptToolCapabilities_has_secondary_color,
	-1, "has_smooth_stroke", 2, "Has Smooth Stroke",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_smooth_stroke_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_space_attenuation = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_strength_pressure, (PropertyRNA *)&rna_SculptToolCapabilities_has_smooth_stroke,
	-1, "has_space_attenuation", 2, "Has Space Attenuation",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_space_attenuation_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_strength_pressure = {
	{(PropertyRNA *)&rna_SculptToolCapabilities_has_gravity, (PropertyRNA *)&rna_SculptToolCapabilities_has_space_attenuation,
	-1, "has_strength_pressure", 2, "Has Strength Pressure",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_strength_pressure_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SculptToolCapabilities_has_gravity = {
	{NULL, (PropertyRNA *)&rna_SculptToolCapabilities_has_strength_pressure,
	-1, "has_gravity", 2, "Has Gravity",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SculptToolCapabilities_has_gravity_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SculptToolCapabilities = {
	{(ContainerRNA *)&RNA_ImapaintToolCapabilities, (ContainerRNA *)&RNA_BrushCapabilities,
	NULL,
	{(PropertyRNA *)&rna_SculptToolCapabilities_rna_properties, (PropertyRNA *)&rna_SculptToolCapabilities_has_gravity}},
	"SculptToolCapabilities", NULL, NULL, 4, "Sculpt Capabilities",
	"Read-only indications of which brush operations are supported by the current sculpt tool",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SculptToolCapabilities_rna_properties,
	NULL,
	&RNA_Brush,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Image Paint Capabilities */
CollectionPropertyRNA rna_ImapaintToolCapabilities_rna_properties = {
	{(PropertyRNA *)&rna_ImapaintToolCapabilities_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImapaintToolCapabilities_rna_properties_begin, ImapaintToolCapabilities_rna_properties_next, ImapaintToolCapabilities_rna_properties_end, ImapaintToolCapabilities_rna_properties_get, NULL, NULL, ImapaintToolCapabilities_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ImapaintToolCapabilities_rna_type = {
	{(PropertyRNA *)&rna_ImapaintToolCapabilities_has_accumulate, (PropertyRNA *)&rna_ImapaintToolCapabilities_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImapaintToolCapabilities_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_ImapaintToolCapabilities_has_accumulate = {
	{(PropertyRNA *)&rna_ImapaintToolCapabilities_has_space_attenuation, (PropertyRNA *)&rna_ImapaintToolCapabilities_rna_type,
	-1, "has_accumulate", 2, "Has Accumulate",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImapaintToolCapabilities_has_accumulate_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImapaintToolCapabilities_has_space_attenuation = {
	{(PropertyRNA *)&rna_ImapaintToolCapabilities_has_radius, (PropertyRNA *)&rna_ImapaintToolCapabilities_has_accumulate,
	-1, "has_space_attenuation", 2, "Has Space Attenuation",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImapaintToolCapabilities_has_space_attenuation_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImapaintToolCapabilities_has_radius = {
	{NULL, (PropertyRNA *)&rna_ImapaintToolCapabilities_has_space_attenuation,
	-1, "has_radius", 2, "Has Radius",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImapaintToolCapabilities_has_radius_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ImapaintToolCapabilities = {
	{(ContainerRNA *)&RNA_BrushTextureSlot, (ContainerRNA *)&RNA_SculptToolCapabilities,
	NULL,
	{(PropertyRNA *)&rna_ImapaintToolCapabilities_rna_properties, (PropertyRNA *)&rna_ImapaintToolCapabilities_has_radius}},
	"ImapaintToolCapabilities", NULL, NULL, 4, "Image Paint Capabilities",
	"Read-only indications of which brush operations are supported by the current image paint brush",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ImapaintToolCapabilities_rna_properties,
	NULL,
	&RNA_Brush,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Brush Texture Slot */
FloatPropertyRNA rna_BrushTextureSlot_angle = {
	{(PropertyRNA *)&rna_BrushTextureSlot_map_mode, NULL,
	-1, "angle", 8195, "Angle",
	"Brush texture rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_brush_angle_update, 0, NULL, NULL,
	offsetof(MTex, rot), 4, NULL},
	BrushTextureSlot_angle_get, BrushTextureSlot_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 6.2831854820f, 0.0f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_BrushTextureSlot_map_mode_items[7] = {
	{0, "VIEW_PLANE", 0, "View Plane", ""},
	{3, "AREA_PLANE", 0, "Area Plane", ""},
	{1, "TILED", 0, "Tiled", ""},
	{2, "3D", 0, "3D", ""},
	{4, "RANDOM", 0, "Random", ""},
	{5, "STENCIL", 0, "Stencil", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushTextureSlot_map_mode = {
	{(PropertyRNA *)&rna_BrushTextureSlot_tex_paint_map_mode, (PropertyRNA *)&rna_BrushTextureSlot_angle,
	-1, "map_mode", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_brush_update, 0, NULL, NULL,
	0, -1, NULL},
	BrushTextureSlot_map_mode_get, BrushTextureSlot_map_mode_set, NULL, NULL, NULL, NULL, rna_BrushTextureSlot_map_mode_items, 6, 0
};

static EnumPropertyItem rna_BrushTextureSlot_tex_paint_map_mode_items[6] = {
	{0, "VIEW_PLANE", 0, "View Plane", ""},
	{1, "TILED", 0, "Tiled", ""},
	{2, "3D", 0, "3D", ""},
	{4, "RANDOM", 0, "Random", ""},
	{5, "STENCIL", 0, "Stencil", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushTextureSlot_tex_paint_map_mode = {
	{(PropertyRNA *)&rna_BrushTextureSlot_mask_map_mode, (PropertyRNA *)&rna_BrushTextureSlot_map_mode,
	-1, "tex_paint_map_mode", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_brush_update, 0, NULL, NULL,
	0, -1, NULL},
	BrushTextureSlot_tex_paint_map_mode_get, BrushTextureSlot_tex_paint_map_mode_set, NULL, NULL, NULL, NULL, rna_BrushTextureSlot_tex_paint_map_mode_items, 5, 0
};

static EnumPropertyItem rna_BrushTextureSlot_mask_map_mode_items[5] = {
	{0, "VIEW_PLANE", 0, "View Plane", ""},
	{1, "TILED", 0, "Tiled", ""},
	{4, "RANDOM", 0, "Random", ""},
	{5, "STENCIL", 0, "Stencil", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushTextureSlot_mask_map_mode = {
	{NULL, (PropertyRNA *)&rna_BrushTextureSlot_tex_paint_map_mode,
	-1, "mask_map_mode", 3, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_brush_update, 0, NULL, NULL,
	0, -1, NULL},
	BrushTextureSlot_mask_map_mode_get, BrushTextureSlot_mask_map_mode_set, NULL, NULL, NULL, NULL, rna_BrushTextureSlot_mask_map_mode_items, 4, 0
};

StructRNA RNA_BrushTextureSlot = {
	{(ContainerRNA *)&RNA_OperatorStrokeElement, (ContainerRNA *)&RNA_ImapaintToolCapabilities,
	NULL,
	{(PropertyRNA *)&rna_BrushTextureSlot_angle, (PropertyRNA *)&rna_BrushTextureSlot_mask_map_mode}},
	"BrushTextureSlot", NULL, NULL, 4, "Brush Texture Slot",
	"Texture slot for textures in a Brush datablock",
	"*", 166,
	(PropertyRNA *)&rna_TextureSlot_name, (PropertyRNA *)&rna_TextureSlot_rna_properties,
	&RNA_TextureSlot,
	NULL,
	NULL,
	rna_TextureSlot_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Operator Stroke Element */
static float rna_OperatorStrokeElement_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_location = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_mouse, NULL,
	-1, "location", 1027, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_location_default
};

static float rna_OperatorStrokeElement_mouse_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_mouse = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_pressure, (PropertyRNA *)&rna_OperatorStrokeElement_location,
	-1, "mouse", 1027, "Mouse",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_mouse_default
};

FloatPropertyRNA rna_OperatorStrokeElement_pressure = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_size, (PropertyRNA *)&rna_OperatorStrokeElement_mouse,
	-1, "pressure", 1027, "Pressure",
	"Tablet pressure",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OperatorStrokeElement_size = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_pen_flip, (PropertyRNA *)&rna_OperatorStrokeElement_pressure,
	-1, "size", 1027, "Brush Size",
	"Brush Size in screen space",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_OperatorStrokeElement_pen_flip = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_time, (PropertyRNA *)&rna_OperatorStrokeElement_size,
	-1, "pen_flip", 1027, "Flip",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_OperatorStrokeElement_time = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_is_start, (PropertyRNA *)&rna_OperatorStrokeElement_pen_flip,
	-1, "time", 1027, "Time",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_OperatorStrokeElement_is_start = {
	{NULL, (PropertyRNA *)&rna_OperatorStrokeElement_time,
	-1, "is_start", 1027, "Is Stroke Start",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_OperatorStrokeElement = {
	{(ContainerRNA *)&RNA_Camera, (ContainerRNA *)&RNA_BrushTextureSlot,
	NULL,
	{(PropertyRNA *)&rna_OperatorStrokeElement_location, (PropertyRNA *)&rna_OperatorStrokeElement_is_start}},
	"OperatorStrokeElement", NULL, NULL, 4, "Operator Stroke Element",
	"",
	"*", 17,
	(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	NULL,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

