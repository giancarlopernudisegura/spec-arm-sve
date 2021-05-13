
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

#include "rna_smoke.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_SmokeDomainSettings_rna_properties;
PointerPropertyRNA rna_SmokeDomainSettings_rna_type;
IntPropertyRNA rna_SmokeDomainSettings_resolution_max;
IntPropertyRNA rna_SmokeDomainSettings_amplify;
BoolPropertyRNA rna_SmokeDomainSettings_use_high_resolution;
BoolPropertyRNA rna_SmokeDomainSettings_show_high_resolution;
EnumPropertyRNA rna_SmokeDomainSettings_noise_type;
FloatPropertyRNA rna_SmokeDomainSettings_alpha;
FloatPropertyRNA rna_SmokeDomainSettings_beta;
PointerPropertyRNA rna_SmokeDomainSettings_collision_group;
PointerPropertyRNA rna_SmokeDomainSettings_fluid_group;
PointerPropertyRNA rna_SmokeDomainSettings_effector_group;
FloatPropertyRNA rna_SmokeDomainSettings_strength;
IntPropertyRNA rna_SmokeDomainSettings_dissolve_speed;
BoolPropertyRNA rna_SmokeDomainSettings_use_dissolve_smoke;
BoolPropertyRNA rna_SmokeDomainSettings_use_dissolve_smoke_log;
PointerPropertyRNA rna_SmokeDomainSettings_point_cache;
EnumPropertyRNA rna_SmokeDomainSettings_point_cache_compress_type;
EnumPropertyRNA rna_SmokeDomainSettings_collision_extents;
PointerPropertyRNA rna_SmokeDomainSettings_effector_weights;
EnumPropertyRNA rna_SmokeDomainSettings_highres_sampling;
FloatPropertyRNA rna_SmokeDomainSettings_time_scale;
FloatPropertyRNA rna_SmokeDomainSettings_vorticity;
FloatPropertyRNA rna_SmokeDomainSettings_density_grid;
FloatPropertyRNA rna_SmokeDomainSettings_flame_grid;
FloatPropertyRNA rna_SmokeDomainSettings_color_grid;
FloatPropertyRNA rna_SmokeDomainSettings_cell_size;
FloatPropertyRNA rna_SmokeDomainSettings_start_point;
IntPropertyRNA rna_SmokeDomainSettings_domain_resolution;
FloatPropertyRNA rna_SmokeDomainSettings_burning_rate;
FloatPropertyRNA rna_SmokeDomainSettings_flame_smoke;
FloatPropertyRNA rna_SmokeDomainSettings_flame_vorticity;
FloatPropertyRNA rna_SmokeDomainSettings_flame_ignition;
FloatPropertyRNA rna_SmokeDomainSettings_flame_max_temp;
FloatPropertyRNA rna_SmokeDomainSettings_flame_smoke_color;
BoolPropertyRNA rna_SmokeDomainSettings_use_adaptive_domain;
IntPropertyRNA rna_SmokeDomainSettings_additional_res;
IntPropertyRNA rna_SmokeDomainSettings_adapt_margin;
FloatPropertyRNA rna_SmokeDomainSettings_adapt_threshold;


CollectionPropertyRNA rna_SmokeFlowSettings_rna_properties;
PointerPropertyRNA rna_SmokeFlowSettings_rna_type;
FloatPropertyRNA rna_SmokeFlowSettings_density;
FloatPropertyRNA rna_SmokeFlowSettings_smoke_color;
FloatPropertyRNA rna_SmokeFlowSettings_fuel_amount;
FloatPropertyRNA rna_SmokeFlowSettings_temperature;
PointerPropertyRNA rna_SmokeFlowSettings_particle_system;
EnumPropertyRNA rna_SmokeFlowSettings_smoke_flow_type;
EnumPropertyRNA rna_SmokeFlowSettings_smoke_flow_source;
BoolPropertyRNA rna_SmokeFlowSettings_use_absolute;
BoolPropertyRNA rna_SmokeFlowSettings_use_initial_velocity;
FloatPropertyRNA rna_SmokeFlowSettings_velocity_factor;
FloatPropertyRNA rna_SmokeFlowSettings_velocity_normal;
FloatPropertyRNA rna_SmokeFlowSettings_velocity_random;
FloatPropertyRNA rna_SmokeFlowSettings_volume_density;
FloatPropertyRNA rna_SmokeFlowSettings_surface_distance;
FloatPropertyRNA rna_SmokeFlowSettings_particle_size;
BoolPropertyRNA rna_SmokeFlowSettings_use_particle_size;
IntPropertyRNA rna_SmokeFlowSettings_subframes;
StringPropertyRNA rna_SmokeFlowSettings_density_vertex_group;
BoolPropertyRNA rna_SmokeFlowSettings_use_texture;
EnumPropertyRNA rna_SmokeFlowSettings_texture_map_type;
StringPropertyRNA rna_SmokeFlowSettings_uv_layer;
PointerPropertyRNA rna_SmokeFlowSettings_noise_texture;
FloatPropertyRNA rna_SmokeFlowSettings_texture_size;
FloatPropertyRNA rna_SmokeFlowSettings_texture_offset;


CollectionPropertyRNA rna_SmokeCollSettings_rna_properties;
PointerPropertyRNA rna_SmokeCollSettings_rna_type;
EnumPropertyRNA rna_SmokeCollSettings_collision_type;

static PointerRNA SmokeDomainSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SmokeDomainSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SmokeDomainSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SmokeDomainSettings_rna_properties_get(iter);
}

void SmokeDomainSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SmokeDomainSettings_rna_properties_get(iter);
}

void SmokeDomainSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SmokeDomainSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SmokeDomainSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SmokeDomainSettings_resolution_max_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (int)(data->maxres);
}

void SmokeDomainSettings_resolution_max_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->maxres = CLAMPIS(value, 6, 512);
}

int SmokeDomainSettings_amplify_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (int)(data->amplify);
}

void SmokeDomainSettings_amplify_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->amplify = CLAMPIS(value, 1, 10);
}

int SmokeDomainSettings_use_high_resolution_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void SmokeDomainSettings_use_high_resolution_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

int SmokeDomainSettings_show_high_resolution_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (((data->viewsettings) & 1) != 0);
}

void SmokeDomainSettings_show_high_resolution_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	if (value) data->viewsettings |= 1;
	else data->viewsettings &= ~1;
}

int SmokeDomainSettings_noise_type_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (int)(data->noise);
}

void SmokeDomainSettings_noise_type_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->noise = value;
}

float SmokeDomainSettings_alpha_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->alpha);
}

void SmokeDomainSettings_alpha_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->alpha = CLAMPIS(value, -5.0f, 5.0f);
}

float SmokeDomainSettings_beta_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->beta);
}

void SmokeDomainSettings_beta_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->beta = CLAMPIS(value, -5.0f, 5.0f);
}

PointerRNA SmokeDomainSettings_collision_group_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->coll_group);
}

void SmokeDomainSettings_collision_group_set(PointerRNA *ptr, PointerRNA value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->coll_group = value.data;
}

PointerRNA SmokeDomainSettings_fluid_group_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->fluid_group);
}

void SmokeDomainSettings_fluid_group_set(PointerRNA *ptr, PointerRNA value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->fluid_group = value.data;
}

PointerRNA SmokeDomainSettings_effector_group_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->eff_group);
}

void SmokeDomainSettings_effector_group_set(PointerRNA *ptr, PointerRNA value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->eff_group = value.data;
}

float SmokeDomainSettings_strength_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->strength);
}

void SmokeDomainSettings_strength_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->strength = CLAMPIS(value, 0.0f, 10.0f);
}

int SmokeDomainSettings_dissolve_speed_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (int)(data->diss_speed);
}

void SmokeDomainSettings_dissolve_speed_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->diss_speed = CLAMPIS(value, 1, 10000);
}

int SmokeDomainSettings_use_dissolve_smoke_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void SmokeDomainSettings_use_dissolve_smoke_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	if (value) data->flags |= 4;
	else data->flags &= ~4;
}

int SmokeDomainSettings_use_dissolve_smoke_log_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void SmokeDomainSettings_use_dissolve_smoke_log_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	if (value) data->flags |= 8;
	else data->flags &= ~8;
}

PointerRNA SmokeDomainSettings_point_cache_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PointCache, data->point_cache[0]);
}

int SmokeDomainSettings_point_cache_compress_type_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (int)(data->cache_comp);
}

void SmokeDomainSettings_point_cache_compress_type_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->cache_comp = value;
}

int SmokeDomainSettings_collision_extents_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (int)(data->border_collisions);
}

void SmokeDomainSettings_collision_extents_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->border_collisions = value;
}

PointerRNA SmokeDomainSettings_effector_weights_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

int SmokeDomainSettings_highres_sampling_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (int)(data->highres_sampling);
}

void SmokeDomainSettings_highres_sampling_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->highres_sampling = value;
}

float SmokeDomainSettings_time_scale_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->time_scale);
}

void SmokeDomainSettings_time_scale_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->time_scale = CLAMPIS(value, 0.2000000030f, 1.5000000000f);
}

float SmokeDomainSettings_vorticity_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->vorticity);
}

void SmokeDomainSettings_vorticity_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->vorticity = CLAMPIS(value, 0.0099999998f, 4.0f);
}

void SmokeDomainSettings_density_grid_get(PointerRNA *ptr, float values[])
{
	rna_SmokeModifier_density_grid_get(ptr, values);
}

void SmokeDomainSettings_flame_grid_get(PointerRNA *ptr, float values[])
{
	rna_SmokeModifier_flame_grid_get(ptr, values);
}

void SmokeDomainSettings_color_grid_get(PointerRNA *ptr, float values[])
{
	rna_SmokeModifier_color_grid_get(ptr, values);
}

void SmokeDomainSettings_cell_size_get(PointerRNA *ptr, float values[3])
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->cell_size)[i]);
	}
}

void SmokeDomainSettings_start_point_get(PointerRNA *ptr, float values[3])
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->p0)[i]);
	}
}

void SmokeDomainSettings_domain_resolution_get(PointerRNA *ptr, int values[3])
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (int)(((int *)data->res)[i]);
	}
}

float SmokeDomainSettings_burning_rate_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->burning_rate);
}

void SmokeDomainSettings_burning_rate_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->burning_rate = CLAMPIS(value, 0.0099999998f, 4.0f);
}

float SmokeDomainSettings_flame_smoke_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->flame_smoke);
}

void SmokeDomainSettings_flame_smoke_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->flame_smoke = CLAMPIS(value, 0.0f, 8.0f);
}

float SmokeDomainSettings_flame_vorticity_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->flame_vorticity);
}

void SmokeDomainSettings_flame_vorticity_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->flame_vorticity = CLAMPIS(value, 0.0f, 2.0f);
}

float SmokeDomainSettings_flame_ignition_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->flame_ignition);
}

void SmokeDomainSettings_flame_ignition_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->flame_ignition = CLAMPIS(value, 0.5000000000f, 5.0f);
}

float SmokeDomainSettings_flame_max_temp_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->flame_max_temp);
}

void SmokeDomainSettings_flame_max_temp_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->flame_max_temp = CLAMPIS(value, 1.0f, 10.0f);
}

void SmokeDomainSettings_flame_smoke_color_get(PointerRNA *ptr, float values[3])
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->flame_smoke_color)[i]);
	}
}

void SmokeDomainSettings_flame_smoke_color_set(PointerRNA *ptr, const float values[3])
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->flame_smoke_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int SmokeDomainSettings_use_adaptive_domain_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (((data->flags) & 128) != 0);
}

void SmokeDomainSettings_use_adaptive_domain_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	if (value) data->flags |= 128;
	else data->flags &= ~128;
}

int SmokeDomainSettings_additional_res_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (int)(data->adapt_res);
}

void SmokeDomainSettings_additional_res_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->adapt_res = CLAMPIS(value, 0, 512);
}

int SmokeDomainSettings_adapt_margin_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (int)(data->adapt_margin);
}

void SmokeDomainSettings_adapt_margin_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->adapt_margin = CLAMPIS(value, 2, 24);
}

float SmokeDomainSettings_adapt_threshold_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	return (float)(data->adapt_threshold);
}

void SmokeDomainSettings_adapt_threshold_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data = (SmokeDomainSettings *)(ptr->data);
	data->adapt_threshold = CLAMPIS(value, 0.0099999998f, 0.5000000000f);
}

static PointerRNA SmokeFlowSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SmokeFlowSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SmokeFlowSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SmokeFlowSettings_rna_properties_get(iter);
}

void SmokeFlowSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SmokeFlowSettings_rna_properties_get(iter);
}

void SmokeFlowSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SmokeFlowSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SmokeFlowSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float SmokeFlowSettings_density_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->density);
}

void SmokeFlowSettings_density_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->density = CLAMPIS(value, 0.0f, 1.0f);
}

void SmokeFlowSettings_smoke_color_get(PointerRNA *ptr, float values[3])
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->color)[i]);
	}
}

void SmokeFlowSettings_smoke_color_set(PointerRNA *ptr, const float values[3])
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float SmokeFlowSettings_fuel_amount_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->fuel_amount);
}

void SmokeFlowSettings_fuel_amount_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->fuel_amount = CLAMPIS(value, 0.0f, 10.0f);
}

float SmokeFlowSettings_temperature_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->temp);
}

void SmokeFlowSettings_temperature_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->temp = CLAMPIS(value, -10.0f, 10.0f);
}

PointerRNA SmokeFlowSettings_particle_system_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ParticleSystem, data->psys);
}

void SmokeFlowSettings_particle_system_set(PointerRNA *ptr, PointerRNA value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->psys = value.data;
}

int SmokeFlowSettings_smoke_flow_type_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (int)(data->type);
}

void SmokeFlowSettings_smoke_flow_type_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->type = value;
}

int SmokeFlowSettings_smoke_flow_source_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (int)(data->source);
}

void SmokeFlowSettings_smoke_flow_source_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->source = value;
}

int SmokeFlowSettings_use_absolute_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void SmokeFlowSettings_use_absolute_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

int SmokeFlowSettings_use_initial_velocity_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void SmokeFlowSettings_use_initial_velocity_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	if (value) data->flags |= 4;
	else data->flags &= ~4;
}

float SmokeFlowSettings_velocity_factor_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->vel_multi);
}

void SmokeFlowSettings_velocity_factor_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->vel_multi = CLAMPIS(value, -100.0f, 100.0f);
}

float SmokeFlowSettings_velocity_normal_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->vel_normal);
}

void SmokeFlowSettings_velocity_normal_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->vel_normal = CLAMPIS(value, -100.0f, 100.0f);
}

float SmokeFlowSettings_velocity_random_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->vel_random);
}

void SmokeFlowSettings_velocity_random_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->vel_random = CLAMPIS(value, 0.0f, 10.0f);
}

float SmokeFlowSettings_volume_density_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->volume_density);
}

void SmokeFlowSettings_volume_density_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->volume_density = CLAMPIS(value, 0.0f, 1.0f);
}

float SmokeFlowSettings_surface_distance_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->surface_distance);
}

void SmokeFlowSettings_surface_distance_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->surface_distance = CLAMPIS(value, 0.0f, 10.0f);
}

float SmokeFlowSettings_particle_size_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->particle_size);
}

void SmokeFlowSettings_particle_size_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->particle_size = CLAMPIS(value, 0.1000000015f, 20.0f);
}

int SmokeFlowSettings_use_particle_size_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (((data->flags) & 16) != 0);
}

void SmokeFlowSettings_use_particle_size_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	if (value) data->flags |= 16;
	else data->flags &= ~16;
}

int SmokeFlowSettings_subframes_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (int)(data->subframes);
}

void SmokeFlowSettings_subframes_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->subframes = CLAMPIS(value, 0, 50);
}

void SmokeFlowSettings_density_vertex_group_get(PointerRNA *ptr, char *value)
{
	rna_SmokeFlow_density_vgroup_get(ptr, value);
}

int SmokeFlowSettings_density_vertex_group_length(PointerRNA *ptr)
{
	return rna_SmokeFlow_density_vgroup_length(ptr);
}

void SmokeFlowSettings_density_vertex_group_set(PointerRNA *ptr, const char *value)
{
	rna_SmokeFlow_density_vgroup_set(ptr, value);
}

int SmokeFlowSettings_use_texture_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void SmokeFlowSettings_use_texture_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	if (value) data->flags |= 8;
	else data->flags &= ~8;
}

int SmokeFlowSettings_texture_map_type_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (int)(data->texture_type);
}

void SmokeFlowSettings_texture_map_type_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->texture_type = value;
}

void SmokeFlowSettings_uv_layer_get(PointerRNA *ptr, char *value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvlayer_name, 64);
}

int SmokeFlowSettings_uv_layer_length(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return strlen(data->uvlayer_name);
}

void SmokeFlowSettings_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_SmokeFlow_uvlayer_set(ptr, value);
}

PointerRNA SmokeFlowSettings_noise_texture_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->noise_texture);
}

void SmokeFlowSettings_noise_texture_set(PointerRNA *ptr, PointerRNA value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);

	if (data->noise_texture)
		id_us_min((ID *)data->noise_texture);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->noise_texture = value.data;
}

float SmokeFlowSettings_texture_size_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->texture_size);
}

void SmokeFlowSettings_texture_size_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->texture_size = CLAMPIS(value, 0.0099999998f, 10.0f);
}

float SmokeFlowSettings_texture_offset_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	return (float)(data->texture_offset);
}

void SmokeFlowSettings_texture_offset_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data = (SmokeFlowSettings *)(ptr->data);
	data->texture_offset = CLAMPIS(value, 0.0f, 200.0f);
}

static PointerRNA SmokeCollSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SmokeCollSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SmokeCollSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SmokeCollSettings_rna_properties_get(iter);
}

void SmokeCollSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SmokeCollSettings_rna_properties_get(iter);
}

void SmokeCollSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SmokeCollSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SmokeCollSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SmokeCollSettings_collision_type_get(PointerRNA *ptr)
{
	SmokeCollSettings *data = (SmokeCollSettings *)(ptr->data);
	return (int)(data->type);
}

void SmokeCollSettings_collision_type_set(PointerRNA *ptr, int value)
{
	SmokeCollSettings *data = (SmokeCollSettings *)(ptr->data);
	data->type = value;
}

int SmokeDomainSettings_density_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_SmokeModifier_grid_get_length(ptr, arraylen);
}

int SmokeDomainSettings_flame_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_SmokeModifier_grid_get_length(ptr, arraylen);
}

int SmokeDomainSettings_color_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_SmokeModifier_color_grid_get_length(ptr, arraylen);
}




/* Domain Settings */
CollectionPropertyRNA rna_SmokeDomainSettings_rna_properties = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_rna_properties_begin, SmokeDomainSettings_rna_properties_next, SmokeDomainSettings_rna_properties_end, SmokeDomainSettings_rna_properties_get, NULL, NULL, SmokeDomainSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SmokeDomainSettings_rna_type = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_resolution_max, (PropertyRNA *)&rna_SmokeDomainSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_SmokeDomainSettings_resolution_max = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_amplify, (PropertyRNA *)&rna_SmokeDomainSettings_rna_type,
	-1, "resolution_max", 8193, "Max Res",
	"Maximal resolution used in the fluid domain",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, maxres), 0, NULL},
	SmokeDomainSettings_resolution_max_get, SmokeDomainSettings_resolution_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	24, 512, 6, 512, 2, 0, NULL
};

IntPropertyRNA rna_SmokeDomainSettings_amplify = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_use_high_resolution, (PropertyRNA *)&rna_SmokeDomainSettings_resolution_max,
	-1, "amplify", 8193, "Amplification",
	"Enhance the resolution of smoke by this factor using noise",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, amplify), 0, NULL},
	SmokeDomainSettings_amplify_get, SmokeDomainSettings_amplify_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

BoolPropertyRNA rna_SmokeDomainSettings_use_high_resolution = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_show_high_resolution, (PropertyRNA *)&rna_SmokeDomainSettings_amplify,
	-1, "use_high_resolution", 1, "High res",
	"Enable high resolution (using amplification)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_use_high_resolution_get, SmokeDomainSettings_use_high_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SmokeDomainSettings_show_high_resolution = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_noise_type, (PropertyRNA *)&rna_SmokeDomainSettings_use_high_resolution,
	-1, "show_high_resolution", 3, "Show High Resolution",
	"Show high resolution (using amplification)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_show_high_resolution_get, SmokeDomainSettings_show_high_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SmokeDomainSettings_noise_type_items[2] = {
	{1, "NOISEWAVE", 0, "Wavelet", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeDomainSettings_noise_type = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_alpha, (PropertyRNA *)&rna_SmokeDomainSettings_show_high_resolution,
	-1, "noise_type", 1, "Noise Method",
	"Noise method which is used for creating the high resolution",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_noise_type_get, SmokeDomainSettings_noise_type_set, NULL, NULL, NULL, NULL, rna_SmokeDomainSettings_noise_type_items, 1, 1
};

FloatPropertyRNA rna_SmokeDomainSettings_alpha = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_beta, (PropertyRNA *)&rna_SmokeDomainSettings_noise_type,
	-1, "alpha", 8195, "Density",
	"How much density affects smoke motion (higher value results in faster rising smoke)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, alpha), 4, NULL},
	SmokeDomainSettings_alpha_get, SmokeDomainSettings_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_beta = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_collision_group, (PropertyRNA *)&rna_SmokeDomainSettings_alpha,
	-1, "beta", 8195, "Heat",
	"How much heat affects smoke motion (higher value results in faster rising smoke)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, beta), 4, NULL},
	SmokeDomainSettings_beta_get, SmokeDomainSettings_beta_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, 0.0f, NULL
};

PointerPropertyRNA rna_SmokeDomainSettings_collision_group = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_fluid_group, (PropertyRNA *)&rna_SmokeDomainSettings_beta,
	-1, "collision_group", 8388609, "Collision Group",
	"Limit collisions to this group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset_dependency, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_collision_group_get, SmokeDomainSettings_collision_group_set, NULL, NULL,&RNA_Group
};

PointerPropertyRNA rna_SmokeDomainSettings_fluid_group = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_effector_group, (PropertyRNA *)&rna_SmokeDomainSettings_collision_group,
	-1, "fluid_group", 8388609, "Fluid Group",
	"Limit fluid objects to this group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset_dependency, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_fluid_group_get, SmokeDomainSettings_fluid_group_set, NULL, NULL,&RNA_Group
};

PointerPropertyRNA rna_SmokeDomainSettings_effector_group = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_strength, (PropertyRNA *)&rna_SmokeDomainSettings_fluid_group,
	-1, "effector_group", 8388609, "Effector Group",
	"Limit effectors to this group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset_dependency, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_effector_group_get, SmokeDomainSettings_effector_group_set, NULL, NULL,&RNA_Group
};

FloatPropertyRNA rna_SmokeDomainSettings_strength = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_dissolve_speed, (PropertyRNA *)&rna_SmokeDomainSettings_effector_group,
	-1, "strength", 8195, "Strength",
	"Strength of noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, strength), 4, NULL},
	SmokeDomainSettings_strength_get, SmokeDomainSettings_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

IntPropertyRNA rna_SmokeDomainSettings_dissolve_speed = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_use_dissolve_smoke, (PropertyRNA *)&rna_SmokeDomainSettings_strength,
	-1, "dissolve_speed", 8195, "Dissolve Speed",
	"Dissolve Speed",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, diss_speed), 0, NULL},
	SmokeDomainSettings_dissolve_speed_get, SmokeDomainSettings_dissolve_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10000, 1, 10000, 1, 0, NULL
};

BoolPropertyRNA rna_SmokeDomainSettings_use_dissolve_smoke = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_use_dissolve_smoke_log, (PropertyRNA *)&rna_SmokeDomainSettings_dissolve_speed,
	-1, "use_dissolve_smoke", 3, "Dissolve Smoke",
	"Enable smoke to disappear over time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_use_dissolve_smoke_get, SmokeDomainSettings_use_dissolve_smoke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SmokeDomainSettings_use_dissolve_smoke_log = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_point_cache, (PropertyRNA *)&rna_SmokeDomainSettings_use_dissolve_smoke,
	-1, "use_dissolve_smoke_log", 3, "Logarithmic dissolve",
	"Using 1/x ",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_use_dissolve_smoke_log_get, SmokeDomainSettings_use_dissolve_smoke_log_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SmokeDomainSettings_point_cache = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_point_cache_compress_type, (PropertyRNA *)&rna_SmokeDomainSettings_use_dissolve_smoke_log,
	-1, "point_cache", 8650752, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {2, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

static EnumPropertyItem rna_SmokeDomainSettings_point_cache_compress_type_items[3] = {
	{0, "CACHELIGHT", 0, "Light", "Fast but not so effective compression"},
	{1, "CACHEHEAVY", 0, "Heavy", "Effective but slow compression"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeDomainSettings_point_cache_compress_type = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_collision_extents, (PropertyRNA *)&rna_SmokeDomainSettings_point_cache,
	-1, "point_cache_compress_type", 3, "Cache Compression",
	"Compression method to be used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_point_cache_compress_type_get, SmokeDomainSettings_point_cache_compress_type_set, NULL, NULL, NULL, NULL, rna_SmokeDomainSettings_point_cache_compress_type_items, 2, 0
};

static EnumPropertyItem rna_SmokeDomainSettings_collision_extents_items[4] = {
	{0, "BORDEROPEN", 0, "Open", "Smoke doesn\'t collide with any border"},
	{1, "BORDERVERTICAL", 0, "Vertically Open", "Smoke doesn\'t collide with top and bottom sides"},
	{2, "BORDERCLOSED", 0, "Collide All", "Smoke collides with every side"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeDomainSettings_collision_extents = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_effector_weights, (PropertyRNA *)&rna_SmokeDomainSettings_point_cache_compress_type,
	-1, "collision_extents", 3, "Border Collisions",
	"Select which domain border will be treated as collision object",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_collision_extents_get, SmokeDomainSettings_collision_extents_set, NULL, NULL, NULL, NULL, rna_SmokeDomainSettings_collision_extents_items, 3, 0
};

PointerPropertyRNA rna_SmokeDomainSettings_effector_weights = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_highres_sampling, (PropertyRNA *)&rna_SmokeDomainSettings_collision_extents,
	-1, "effector_weights", 8388608, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

static EnumPropertyItem rna_SmokeDomainSettings_highres_sampling_items[4] = {
	{2, "FULLSAMPLE", 0, "Full Sample", ""},
	{1, "LINEAR", 0, "Linear", ""},
	{0, "NEAREST", 0, "Nearest", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeDomainSettings_highres_sampling = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_time_scale, (PropertyRNA *)&rna_SmokeDomainSettings_effector_weights,
	-1, "highres_sampling", 3, "Emitter",
	"Method for sampling the high resolution flow",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_highres_sampling_get, SmokeDomainSettings_highres_sampling_set, NULL, NULL, NULL, NULL, rna_SmokeDomainSettings_highres_sampling_items, 3, 0
};

FloatPropertyRNA rna_SmokeDomainSettings_time_scale = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_vorticity, (PropertyRNA *)&rna_SmokeDomainSettings_highres_sampling,
	-1, "time_scale", 8195, "Time Scale",
	"Adjust simulation speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, time_scale), 4, NULL},
	SmokeDomainSettings_time_scale_get, SmokeDomainSettings_time_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.2000000030f, 1.5000000000f, 0.2000000030f, 1.5000000000f, 0.0199999996f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_vorticity = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_density_grid, (PropertyRNA *)&rna_SmokeDomainSettings_time_scale,
	-1, "vorticity", 8195, "Vorticity",
	"Amount of turbulence/rotation in fluid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, vorticity), 4, NULL},
	SmokeDomainSettings_vorticity_get, SmokeDomainSettings_vorticity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 4.0f, 0.0099999998f, 4.0f, 0.0199999996f, 5, 0.0f, NULL
};

static float rna_SmokeDomainSettings_density_grid_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SmokeDomainSettings_density_grid = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_flame_grid, (PropertyRNA *)&rna_SmokeDomainSettings_vorticity,
	-1, "density_grid", 131074, "Density Grid",
	"Smoke density grid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_SmokeModifier_grid_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SmokeDomainSettings_density_grid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SmokeDomainSettings_density_grid_default
};

static float rna_SmokeDomainSettings_flame_grid_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SmokeDomainSettings_flame_grid = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_color_grid, (PropertyRNA *)&rna_SmokeDomainSettings_density_grid,
	-1, "flame_grid", 131074, "Flame Grid",
	"Smoke flame grid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_SmokeModifier_grid_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SmokeDomainSettings_flame_grid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SmokeDomainSettings_flame_grid_default
};

static float rna_SmokeDomainSettings_color_grid_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SmokeDomainSettings_color_grid = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_cell_size, (PropertyRNA *)&rna_SmokeDomainSettings_flame_grid,
	-1, "color_grid", 131074, "Color Grid",
	"Smoke color grid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_SmokeModifier_color_grid_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SmokeDomainSettings_color_grid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SmokeDomainSettings_color_grid_default
};

static float rna_SmokeDomainSettings_cell_size_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SmokeDomainSettings_cell_size = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_start_point, (PropertyRNA *)&rna_SmokeDomainSettings_color_grid,
	-1, "cell_size", 8194, "cell_size",
	"Cell Size",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(SmokeDomainSettings, cell_size), 4, NULL},
	NULL, NULL, SmokeDomainSettings_cell_size_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SmokeDomainSettings_cell_size_default
};

static float rna_SmokeDomainSettings_start_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SmokeDomainSettings_start_point = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_domain_resolution, (PropertyRNA *)&rna_SmokeDomainSettings_cell_size,
	-1, "start_point", 8194, "p0",
	"Start point",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(SmokeDomainSettings, p0), 4, NULL},
	NULL, NULL, SmokeDomainSettings_start_point_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SmokeDomainSettings_start_point_default
};

static int rna_SmokeDomainSettings_domain_resolution_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_SmokeDomainSettings_domain_resolution = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_burning_rate, (PropertyRNA *)&rna_SmokeDomainSettings_start_point,
	-1, "domain_resolution", 8194, "res",
	"Smoke Grid Resolution",
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(SmokeDomainSettings, res), 0, NULL},
	NULL, NULL, SmokeDomainSettings_domain_resolution_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_SmokeDomainSettings_domain_resolution_default
};

FloatPropertyRNA rna_SmokeDomainSettings_burning_rate = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_flame_smoke, (PropertyRNA *)&rna_SmokeDomainSettings_domain_resolution,
	-1, "burning_rate", 8195, "Speed",
	"Speed of the burning reaction (use larger values for smaller flame)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, burning_rate), 4, NULL},
	SmokeDomainSettings_burning_rate_get, SmokeDomainSettings_burning_rate_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 2.0f, 0.0099999998f, 4.0f, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_flame_smoke = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_flame_vorticity, (PropertyRNA *)&rna_SmokeDomainSettings_burning_rate,
	-1, "flame_smoke", 8195, "Smoke",
	"Amount of smoke created by burning fuel",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, flame_smoke), 4, NULL},
	SmokeDomainSettings_flame_smoke_get, SmokeDomainSettings_flame_smoke_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 4.0f, 0.0f, 8.0f, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_flame_vorticity = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_flame_ignition, (PropertyRNA *)&rna_SmokeDomainSettings_flame_smoke,
	-1, "flame_vorticity", 8195, "Vorticity",
	"Additional vorticity for the flames",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, flame_vorticity), 4, NULL},
	SmokeDomainSettings_flame_vorticity_get, SmokeDomainSettings_flame_vorticity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 2.0f, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_flame_ignition = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_flame_max_temp, (PropertyRNA *)&rna_SmokeDomainSettings_flame_vorticity,
	-1, "flame_ignition", 8195, "Ignition",
	"Minimum temperature of flames",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, flame_ignition), 4, NULL},
	SmokeDomainSettings_flame_ignition_get, SmokeDomainSettings_flame_ignition_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.5000000000f, 2.5000000000f, 0.5000000000f, 5.0f, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_flame_max_temp = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_flame_smoke_color, (PropertyRNA *)&rna_SmokeDomainSettings_flame_ignition,
	-1, "flame_max_temp", 8195, "Maximum",
	"Maximum temperature of flames",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, flame_max_temp), 4, NULL},
	SmokeDomainSettings_flame_max_temp_get, SmokeDomainSettings_flame_max_temp_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 5.0f, 1.0f, 10.0f, 1.0f, 5, 0.0f, NULL
};

static float rna_SmokeDomainSettings_flame_smoke_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SmokeDomainSettings_flame_smoke_color = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_use_adaptive_domain, (PropertyRNA *)&rna_SmokeDomainSettings_flame_max_temp,
	-1, "flame_smoke_color", 8195, "Smoke Color",
	"Color of smoke emitted from burning fuel",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, flame_smoke_color), 4, NULL},
	NULL, NULL, SmokeDomainSettings_flame_smoke_color_get, SmokeDomainSettings_flame_smoke_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_SmokeDomainSettings_flame_smoke_color_default
};

BoolPropertyRNA rna_SmokeDomainSettings_use_adaptive_domain = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_additional_res, (PropertyRNA *)&rna_SmokeDomainSettings_flame_smoke_color,
	-1, "use_adaptive_domain", 1, "Adaptive Domain",
	"Adapt simulation resolution and size to fluid",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_use_adaptive_domain_get, SmokeDomainSettings_use_adaptive_domain_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SmokeDomainSettings_additional_res = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_adapt_margin, (PropertyRNA *)&rna_SmokeDomainSettings_use_adaptive_domain,
	-1, "additional_res", 8195, "Additional",
	"Maximum number of additional cells",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, adapt_res), 0, NULL},
	SmokeDomainSettings_additional_res_get, SmokeDomainSettings_additional_res_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 512, 0, 512, 2, 0, NULL
};

IntPropertyRNA rna_SmokeDomainSettings_adapt_margin = {
	{(PropertyRNA *)&rna_SmokeDomainSettings_adapt_threshold, (PropertyRNA *)&rna_SmokeDomainSettings_additional_res,
	-1, "adapt_margin", 8195, "Margin",
	"Margin added around fluid to minimize boundary interference",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, adapt_margin), 0, NULL},
	SmokeDomainSettings_adapt_margin_get, SmokeDomainSettings_adapt_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	2, 24, 2, 24, 2, 0, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_adapt_threshold = {
	{NULL, (PropertyRNA *)&rna_SmokeDomainSettings_adapt_margin,
	-1, "adapt_threshold", 8195, "Threshold",
	"Maximum amount of fluid cell can contain before it is considered empty",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_resetCache, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, adapt_threshold), 4, NULL},
	SmokeDomainSettings_adapt_threshold_get, SmokeDomainSettings_adapt_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 0.5000000000f, 0.0099999998f, 0.5000000000f, 1.0f, 5, 0.0f, NULL
};

StructRNA RNA_SmokeDomainSettings = {
	{(ContainerRNA *)&RNA_SmokeFlowSettings, (ContainerRNA *)&RNA_BrightContrastModifier,
	NULL,
	{(PropertyRNA *)&rna_SmokeDomainSettings_rna_properties, (PropertyRNA *)&rna_SmokeDomainSettings_adapt_threshold}},
	"SmokeDomainSettings", NULL, NULL, 4, "Domain Settings",
	"Smoke domain settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SmokeDomainSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SmokeDomainSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Flow Settings */
CollectionPropertyRNA rna_SmokeFlowSettings_rna_properties = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_rna_properties_begin, SmokeFlowSettings_rna_properties_next, SmokeFlowSettings_rna_properties_end, SmokeFlowSettings_rna_properties_get, NULL, NULL, SmokeFlowSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SmokeFlowSettings_rna_type = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_density, (PropertyRNA *)&rna_SmokeFlowSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_SmokeFlowSettings_density = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_smoke_color, (PropertyRNA *)&rna_SmokeFlowSettings_rna_type,
	-1, "density", 8195, "Density",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, density), 4, NULL},
	SmokeFlowSettings_density_get, SmokeFlowSettings_density_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 4, 0.0f, NULL
};

static float rna_SmokeFlowSettings_smoke_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SmokeFlowSettings_smoke_color = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_fuel_amount, (PropertyRNA *)&rna_SmokeFlowSettings_density,
	-1, "smoke_color", 8195, "Smoke Color",
	"Color of smoke",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, color), 4, NULL},
	NULL, NULL, SmokeFlowSettings_smoke_color_get, SmokeFlowSettings_smoke_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_SmokeFlowSettings_smoke_color_default
};

FloatPropertyRNA rna_SmokeFlowSettings_fuel_amount = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_temperature, (PropertyRNA *)&rna_SmokeFlowSettings_smoke_color,
	-1, "fuel_amount", 8195, "Flame Rate",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, fuel_amount), 4, NULL},
	SmokeFlowSettings_fuel_amount_get, SmokeFlowSettings_fuel_amount_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 10.0f, 1.0f, 4, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_temperature = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_particle_system, (PropertyRNA *)&rna_SmokeFlowSettings_fuel_amount,
	-1, "temperature", 8195, "Temp. Diff.",
	"Temperature difference to ambient temperature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, temp), 4, NULL},
	SmokeFlowSettings_temperature_get, SmokeFlowSettings_temperature_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 1, 0.0f, NULL
};

PointerPropertyRNA rna_SmokeFlowSettings_particle_system = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_smoke_flow_type, (PropertyRNA *)&rna_SmokeFlowSettings_temperature,
	-1, "particle_system", 8388609, "Particle Systems",
	"Particle systems emitted from the object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset_dependency, 0, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_particle_system_get, SmokeFlowSettings_particle_system_set, NULL, NULL,&RNA_ParticleSystem
};

static EnumPropertyItem rna_SmokeFlowSettings_smoke_flow_type_items[5] = {
	{2, "OUTFLOW", 0, "Outflow", "Delete smoke from simulation"},
	{0, "SMOKE", 0, "Smoke", "Add smoke"},
	{3, "BOTH", 0, "Fire + Smoke", "Add fire and smoke"},
	{1, "FIRE", 0, "Fire", "Add fire"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeFlowSettings_smoke_flow_type = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_smoke_flow_source, (PropertyRNA *)&rna_SmokeFlowSettings_particle_system,
	-1, "smoke_flow_type", 3, "Flow Type",
	"Change how flow affects the simulation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_smoke_flow_type_get, SmokeFlowSettings_smoke_flow_type_set, NULL, NULL, NULL, NULL, rna_SmokeFlowSettings_smoke_flow_type_items, 4, 0
};

static EnumPropertyItem rna_SmokeFlowSettings_smoke_flow_source_items[3] = {
	{0, "PARTICLES", 88, "Particle System", "Emit smoke from particles"},
	{1, "MESH", 307, "Mesh", "Emit smoke from mesh surface or volume"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeFlowSettings_smoke_flow_source = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_use_absolute, (PropertyRNA *)&rna_SmokeFlowSettings_smoke_flow_type,
	-1, "smoke_flow_source", 3, "Source",
	"Change how smoke is emitted",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_smoke_flow_source_get, SmokeFlowSettings_smoke_flow_source_set, NULL, NULL, NULL, NULL, rna_SmokeFlowSettings_smoke_flow_source_items, 2, 0
};

BoolPropertyRNA rna_SmokeFlowSettings_use_absolute = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_use_initial_velocity, (PropertyRNA *)&rna_SmokeFlowSettings_smoke_flow_source,
	-1, "use_absolute", 3, "Absolute Density",
	"Only allow given density value in emitter area",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_use_absolute_get, SmokeFlowSettings_use_absolute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SmokeFlowSettings_use_initial_velocity = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_velocity_factor, (PropertyRNA *)&rna_SmokeFlowSettings_use_absolute,
	-1, "use_initial_velocity", 3, "Initial Velocity",
	"Smoke has some initial velocity when it is emitted",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_use_initial_velocity_get, SmokeFlowSettings_use_initial_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_velocity_factor = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_velocity_normal, (PropertyRNA *)&rna_SmokeFlowSettings_use_initial_velocity,
	-1, "velocity_factor", 8195, "Source",
	"Multiplier of source velocity passed to smoke",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, vel_multi), 4, NULL},
	SmokeFlowSettings_velocity_factor_get, SmokeFlowSettings_velocity_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2.0f, 2.0f, -100.0f, 100.0f, 0.0500000007f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_velocity_normal = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_velocity_random, (PropertyRNA *)&rna_SmokeFlowSettings_velocity_factor,
	-1, "velocity_normal", 8195, "Normal",
	"Amount of normal directional velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, vel_normal), 4, NULL},
	SmokeFlowSettings_velocity_normal_get, SmokeFlowSettings_velocity_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2.0f, 2.0f, -100.0f, 100.0f, 0.0500000007f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_velocity_random = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_volume_density, (PropertyRNA *)&rna_SmokeFlowSettings_velocity_normal,
	-1, "velocity_random", 8195, "Random",
	"Amount of random velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, vel_random), 4, NULL},
	SmokeFlowSettings_velocity_random_get, SmokeFlowSettings_velocity_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 10.0f, 0.0500000007f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_volume_density = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_surface_distance, (PropertyRNA *)&rna_SmokeFlowSettings_velocity_random,
	-1, "volume_density", 8195, "Volume",
	"Factor for smoke emitted from inside the mesh volume",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, volume_density), 4, NULL},
	SmokeFlowSettings_volume_density_get, SmokeFlowSettings_volume_density_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_surface_distance = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_particle_size, (PropertyRNA *)&rna_SmokeFlowSettings_volume_density,
	-1, "surface_distance", 8195, "Surface",
	"Maximum distance from mesh surface to emit smoke",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, surface_distance), 4, NULL},
	SmokeFlowSettings_surface_distance_get, SmokeFlowSettings_surface_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.5000000000f, 5.0f, 0.0f, 10.0f, 0.0500000007f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_particle_size = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_use_particle_size, (PropertyRNA *)&rna_SmokeFlowSettings_surface_distance,
	-1, "particle_size", 8195, "Size",
	"Particle size in simulation cells",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, particle_size), 4, NULL},
	SmokeFlowSettings_particle_size_get, SmokeFlowSettings_particle_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.5000000000f, 5.0f, 0.1000000015f, 20.0f, 0.0500000007f, 5, 0.0f, NULL
};

BoolPropertyRNA rna_SmokeFlowSettings_use_particle_size = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_subframes, (PropertyRNA *)&rna_SmokeFlowSettings_particle_size,
	-1, "use_particle_size", 3, "Set Size",
	"Set particle size in simulation cells or use nearest cell",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_use_particle_size_get, SmokeFlowSettings_use_particle_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SmokeFlowSettings_subframes = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_density_vertex_group, (PropertyRNA *)&rna_SmokeFlowSettings_use_particle_size,
	-1, "subframes", 8195, "Subframes",
	"Number of additional samples to take between frames to improve quality of fast moving flows",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, subframes), 0, NULL},
	SmokeFlowSettings_subframes_get, SmokeFlowSettings_subframes_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10, 0, 50, 1, 0, NULL
};

StringPropertyRNA rna_SmokeFlowSettings_density_vertex_group = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_use_texture, (PropertyRNA *)&rna_SmokeFlowSettings_subframes,
	-1, "density_vertex_group", 262145, "Vertex Group",
	"Name of vertex group which determines surface emission rate",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_density_vertex_group_get, SmokeFlowSettings_density_vertex_group_length, SmokeFlowSettings_density_vertex_group_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_SmokeFlowSettings_use_texture = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_texture_map_type, (PropertyRNA *)&rna_SmokeFlowSettings_density_vertex_group,
	-1, "use_texture", 3, "Use Texture",
	"Use a texture to control emission strength",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_use_texture_get, SmokeFlowSettings_use_texture_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SmokeFlowSettings_texture_map_type_items[3] = {
	{0, "AUTO", 0, "Generated", "Generated coordinates centered to flow object"},
	{1, "UV", 0, "UV", "Use UV layer for texture coordinates"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeFlowSettings_texture_map_type = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_uv_layer, (PropertyRNA *)&rna_SmokeFlowSettings_use_texture,
	-1, "texture_map_type", 3, "Mapping",
	"Texture mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_texture_map_type_get, SmokeFlowSettings_texture_map_type_set, NULL, NULL, NULL, NULL, rna_SmokeFlowSettings_texture_map_type_items, 2, 0
};

StringPropertyRNA rna_SmokeFlowSettings_uv_layer = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_noise_texture, (PropertyRNA *)&rna_SmokeFlowSettings_texture_map_type,
	-1, "uv_layer", 262145, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_uv_layer_get, SmokeFlowSettings_uv_layer_length, SmokeFlowSettings_uv_layer_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_SmokeFlowSettings_noise_texture = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_texture_size, (PropertyRNA *)&rna_SmokeFlowSettings_uv_layer,
	-1, "noise_texture", 8388673, "Texture",
	"Texture that controls emission strength",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_noise_texture_get, SmokeFlowSettings_noise_texture_set, NULL, NULL,&RNA_Texture
};

FloatPropertyRNA rna_SmokeFlowSettings_texture_size = {
	{(PropertyRNA *)&rna_SmokeFlowSettings_texture_offset, (PropertyRNA *)&rna_SmokeFlowSettings_noise_texture,
	-1, "texture_size", 8195, "Size",
	"Size of texture mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, texture_size), 4, NULL},
	SmokeFlowSettings_texture_size_get, SmokeFlowSettings_texture_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 5.0f, 0.0099999998f, 10.0f, 0.0500000007f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_texture_offset = {
	{NULL, (PropertyRNA *)&rna_SmokeFlowSettings_texture_size,
	-1, "texture_offset", 8195, "Offset",
	"Z-offset of texture mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeFlowSettings, texture_offset), 4, NULL},
	SmokeFlowSettings_texture_offset_get, SmokeFlowSettings_texture_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 200.0f, 0.0500000007f, 5, 0.0f, NULL
};

StructRNA RNA_SmokeFlowSettings = {
	{(ContainerRNA *)&RNA_SmokeCollSettings, (ContainerRNA *)&RNA_SmokeDomainSettings,
	NULL,
	{(PropertyRNA *)&rna_SmokeFlowSettings_rna_properties, (PropertyRNA *)&rna_SmokeFlowSettings_texture_offset}},
	"SmokeFlowSettings", NULL, NULL, 4, "Flow Settings",
	"Smoke flow settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SmokeFlowSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SmokeFlowSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Collision Settings */
CollectionPropertyRNA rna_SmokeCollSettings_rna_properties = {
	{(PropertyRNA *)&rna_SmokeCollSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeCollSettings_rna_properties_begin, SmokeCollSettings_rna_properties_next, SmokeCollSettings_rna_properties_end, SmokeCollSettings_rna_properties_get, NULL, NULL, SmokeCollSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SmokeCollSettings_rna_type = {
	{(PropertyRNA *)&rna_SmokeCollSettings_collision_type, (PropertyRNA *)&rna_SmokeCollSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeCollSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_SmokeCollSettings_collision_type_items[4] = {
	{0, "COLLSTATIC", 0, "Static", "Non moving obstacle"},
	{1, "COLLRIGID", 0, "Rigid", "Rigid obstacle"},
	{2, "COLLANIMATED", 0, "Animated", "Animated obstacle"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeCollSettings_collision_type = {
	{NULL, (PropertyRNA *)&rna_SmokeCollSettings_rna_type,
	-1, "collision_type", 3, "Collision type",
	"Collision type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeCollSettings_collision_type_get, SmokeCollSettings_collision_type_set, NULL, NULL, NULL, NULL, rna_SmokeCollSettings_collision_type_items, 3, 0
};

StructRNA RNA_SmokeCollSettings = {
	{(ContainerRNA *)&RNA_Space, (ContainerRNA *)&RNA_SmokeFlowSettings,
	NULL,
	{(PropertyRNA *)&rna_SmokeCollSettings_rna_properties, (PropertyRNA *)&rna_SmokeCollSettings_collision_type}},
	"SmokeCollSettings", NULL, NULL, 4, "Collision Settings",
	"Smoke collision settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SmokeCollSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SmokeCollSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

